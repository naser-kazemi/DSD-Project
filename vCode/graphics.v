`timescale 1ns / 1ps

`include "rope.v"
// `include "seq.v"

module graphics(
	input wire video_on,
	input wire clk, reset,
	// input wire u, d, l, r,
	input wire [9:0] pix_x, pix_y,
	input wire[9:0] mouse_x, mouse_y,
	output [2:0] graph_rgb
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

	rope rp(clk, reset, mouse_x, mouse_y, nodes_x, nodes_y);



	localparam BALL_SIZE = 10;
	localparam BALL_RADIUS = BALL_SIZE >> 1;
	 
	wire collides;
	
	// check of the current pixel is inside our object
	reg [19:0] collides_vec;
	genvar j;
	// always @(pix_x, pix_y)
	// begin
		generate
		for (j = 0; j < 20; j = j + 1) begin
			assign collides_vec[j] = (node_x_pos[j] + BALL_RADIUS - pix_x) * (node_x_pos[j] + BALL_RADIUS - pix_x) + 
	        (node_y_pos[j] + BALL_RADIUS - pix_y) * (node_y_pos[j] + BALL_RADIUS - pix_y) <= BALL_RADIUS * BALL_RADIUS;
		end
		endgenerate

	assign collides = |collides_vec;
	
	// set pixel color based on position

	assign graph_rgb = video_on ? collides ? 3'b001 : 3'b111 : 3'b000;

endmodule