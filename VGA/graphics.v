`timescale 1ns / 1ps

module graphics(
    input wire video_on,
	input wire clk, reset,
	input wire u, d, l, r,
	input wire [9:0] pix_x, pix_y,
	
	output reg [2:0] graph_rgb
);
	
	localparam RADIUS = 25;
	
	localparam CIRCLE_COLOR = 3'b101; // magenta
	localparam BACKGROUND_COLOR = 3'b010; // green
	
	// signal declaration
	reg [9:0] center_x, center_y;

	// next state regs
	reg [9:0] center_x_next, center_y_next;
	
	// sequential logic
	always @(posedge clk)
    begin
        if(reset)
        begin
            center_x <= 100;
            center_y <= 100;
        end
        else
        begin
            center_x <= center_x_next;
            center_y <= center_y_next;
        end
    end
	
	// moving the circle by one pixel based on inputs
	always @(*)
	begin
	    center_x_next = center_x;
	    center_y_next = center_y;
	    
	    if(u)
	      center_y_next = center_y - 1;
	    if(d)
	      center_y_next = center_y + 1;
	    if(l)
	      center_x_next = center_x - 1;
	    if(r)
	      center_x_next = center_x + 1;
	end
	
	// check if the current pixel is inside our circle
	reg in_circle;
	always @(*)
	begin	        
	    in_circle = (center_x - pix_x) * (center_x - pix_x) + 
		            (center_y - pix_y) * (center_y - pix_y) <= RADIUS * RADIUS;
		
		// default value
		graph_rgb = 3'b000;
		if(video_on)
			graph_rgb = BACKGROUND_COLOR;
		if(video_on && in_circle)
			graph_rgb = CIRCLE_COLOR;
	end


endmodule
