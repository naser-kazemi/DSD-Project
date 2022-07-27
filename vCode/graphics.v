`timescale 1ns / 1ps

`include "rope.v"
`include "seq.v"

module graphics(
	input wire video_on,
	input wire clk, reset,
	input wire u, d, l, r,
	input wire [9:0] pix_x, pix_y,
	input wire[9:0] mouse_x, mouse_y,
	output reg [2:0] graph_rgb
);
	
	wire [200 - 1:0] nodes_x;
	wire [200 - 1:0] nodes_y;

	wire [9:0] node_x_pos [19:0];
	wire [9:0] node_y_pos [19:0];

	genvar i;
	generate
		for (i = 0; i < 20; i = i + 1) begin
			assign node_x_pos[i] = nodes_x[i * 10 + 9:i * 10];
			assign node_y_pos[i] = nodes_y[i * 10 + 9:i * 10];
		end
	endgenerate

	wire [31:0] clk_counter;

	seq #(11)s(
		clk,
		reset,
		clk_counter
	);

	rope rp(clk, reset, mouse_x, mouse_y, nodes_x, nodes_y);



	localparam BALL_SIZE = 10;
	localparam BALL_RADIUS = BALL_SIZE >> 1;
	 
	// signal declaration
	reg [9:0] ball_x_l, ball_y_t;
	reg [9:0] ball_x_l_next, ball_y_t_next;
	
	reg [9:0] ball_x_r, ball_y_b;
	wire collides;
	
	// sequential logic
	// always @(posedge clk)
    // begin
    //     if(reset)
    //     begin
    //         ball_x_l <= 0;
    //         ball_y_t <= 0;
    //     end
    //     else
    //     begin
    //         ball_x_l <= ball_x_l_next;
    //         ball_y_t <= ball_y_t_next;
    //     end
    // end
	
	// // moving the object based on inputs
	// // a maximum of one pixel per clock
	// always @(*)
	// begin
	//     ball_x_l_next = mouse_x;
	//     ball_y_t_next = mouse_y;
	    
	//     /*
	//     if(d)
	//       ball_y_t_next = ball_y_t + 1; // move down
	//     if(u)
	//       ball_y_t_next = ball_y_t - 1; // move up
	//     if(r)
	//       ball_x_l_next = ball_x_l + 1; // move right
	//     if(l)
	//       ball_x_l_next = ball_x_l - 1; // move left
	//       */
	// end
	
	// check of the current pixel is inside our object
	reg [19:0] collides_vec;
	integer j;
	always @(pix_x, pix_y)
	begin
		for (j = 0; j < 20; j = j + 1) begin
			// $display("node %d x = %d \t y = %d", j, node_x_pos[j], node_y_pos[j]);
			collides_vec[j] = (node_x_pos[j] + BALL_RADIUS - pix_x) * (node_x_pos[j] + BALL_RADIUS - pix_x) + 
	        (node_y_pos[j] + BALL_RADIUS - pix_y) * (node_y_pos[j] + BALL_RADIUS - pix_y) <= BALL_RADIUS * BALL_RADIUS;
		end

	    // ball_x_r = ball_x_l + BALL_SIZE - 1;
	    // ball_y_b = ball_y_t + BALL_SIZE - 1;
	    
	    //collides = (ball_x_l <= pix_x) && (pix_x <= ball_x_r) && 
	    //    (ball_y_t <= pix_y) && (pix_y <= ball_y_b);
	        
	    // collides = (ball_x_l + BALL_RADIUS - pix_x) * (ball_x_l + BALL_RADIUS - pix_x) + 
	        // (ball_y_t + BALL_RADIUS - pix_y) * (ball_y_t + BALL_RADIUS - pix_y) <= BALL_RADIUS * BALL_RADIUS;
	end

	assign collides = |collides_vec;
	
	// set pixel color based on position
	always @(pix_x, pix_y, graph_rgb)
	begin
	    graph_rgb = 3'b000; // black
	    if (video_on)
	        graph_rgb = 3'b111; // white
	    if (video_on && collides)
		    graph_rgb = 3'b001; // red
	end

endmodule