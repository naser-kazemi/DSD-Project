// Author: Saman Mohseni
// Email: cloud.saman@gmail.com

#include <verilated.h>          // defines common routines
#include <GL/glut.h>
#include <thread>
#include <iostream>

#include "Vdisplay.h"           // from Verilating "display.v"

using namespace std;

Vdisplay* display;              // instantiation of the model

uint64_t main_time = 0;         // current simulation time
double sc_time_stamp() {        // called by $time in Verilog
    return main_time;
}

// to wait for the graphics thread to complete initialization
bool gl_setup_complete = false;

// VGA 640-by-480 sync parameters
const int HD = 640; // horizontal display area
const int HF = 48;  // h.front (left) border
const int HB = 16;  // h.back (right) border
const int HR = 96;  // h.retrace
const int VD = 480; // vertical display area
const int VF = 10;  // v.front (top) border
const int VB = 33;  // v.back (bottom) border
const int VR = 2;   // v.retrace

// pixels are buffered here
float graphics_buffer[HD][VD][3] = {};

// calculating each pixel's size in accordance to OpenGL system
// each axis in OpenGL is in the range [-1:1]
float pixel_w = 2.0 / HD;
float pixel_h = 2.0 / VD;

// gets called periodically to update screen
void render(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // convert pixels into OpenGL rectangles
	for(int i = 0; i < HD; i++){
		for(int j = 0; j < VD; j++){
			glColor3f(graphics_buffer[i][j][0], graphics_buffer[i][j][1], graphics_buffer[i][j][2]);
			glRectf(i*pixel_w-1, -j*pixel_h+1, (i+1)*pixel_w-1, -(j+1)*pixel_h+1);
		}
	}
	
    glFlush();
}

// timer to periodically update the screen
void glutTimer(int t) {
	glutPostRedisplay(); // rerenders the screen
	glutTimerFunc(t, glutTimer, t);
}

// handle up/down/left/right arrow keys
int keys[4] = {};
void Special_input(int key, int x, int y) {
	switch(key) {
		case GLUT_KEY_UP:
		    keys[0] = 1;
		    break;
		case GLUT_KEY_DOWN:
		    keys[1] = 1;
		    break;
		case GLUT_KEY_LEFT:
		    keys[2] = 1;
		    break;
		case GLUT_KEY_RIGHT:
		    keys[3] = 1;
		    break;
	}
}

// initiate and hande graphics
void graphics_loop(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(HD, VD);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("VGA Simulator");
    glutDisplayFunc(render);
    glutSpecialFunc(Special_input);
	
    gl_setup_complete = true;
    
	glutTimerFunc(2, glutTimer, 2);
    glutMainLoop();
}

// tracking VGA signals
int h_count = 0;
int v_count = 0;
bool pre_hsync = 0;
bool pre_vsync = 0;

// set verilog module inputs based on arrow key inputs
void apply_input() {
    display->u = keys[0];
    display->d = keys[1];
    display->l = keys[2];
    display->r = keys[3];
    
    for(int i=0; i<4; i++)
        keys[i] = 0;
}

// we only want the input to last for one or few clocks
void discard_input() {
    display->u = 0;
    display->d = 0;
    display->l = 0;
    display->r = 0;
}

// read VGA outputs and update graphics buffer
void sample_pixel() {
    discard_input();
    
	h_count = (h_count + 1) % (HD + HF + HB + HR);

	if(!display->hsync && pre_hsync){ // on negative edge of hsync
		h_count = HD + HB + HR; // resync horizontal counter
		v_count = (v_count + 1) % (VD + VF + VB + VR);
	}

	if(!display->vsync && pre_vsync){ // on negative edge of vsync
		v_count = VD + VB + VR; // resync vertical counter
		apply_input(); // inputes are pulsed once each new frame
	}

	if(h_count < HD && v_count < VD){
	    int rgb = display->rgb;
		graphics_buffer[h_count][v_count][0] = float((rgb & (1 << 0)) >> 0);
		graphics_buffer[h_count][v_count][1] = float((rgb & (1 << 1)) >> 1);
		graphics_buffer[h_count][v_count][2] = float((rgb & (1 << 2)) >> 2);
	}

	pre_hsync = display->hsync;
	pre_vsync = display->vsync;
}

// simulate for a single clock
void tick() {
    // update simulation time
    main_time++;

    // rising edge
    display->clk = 1;
    display->eval();

    // falling edge
    display->clk = 0;
    display->eval();
}

// globally reset the model
void reset() {
    display->reset = 1;
    display->clk = 0;
    display->eval();
    tick();
    display->reset = 0;
}

int main(int argc, char** argv) {
    // create a new thread for graphics handling
    thread thread(graphics_loop, argc, argv);
    // wait for graphics initialization to complete
    while(!gl_setup_complete);

    Verilated::commandArgs(argc, argv);   // remember args

    // create the model
    display = new Vdisplay;

    // reset the model
    reset();

    // cycle accurate simulation loop
    while (!Verilated::gotFinish()) {
        tick();
		sample_pixel();
    }

    display->final();
    delete display;
}

