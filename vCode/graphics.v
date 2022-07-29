`timescale 1ns / 1ps

`include "rope.v"

module graphics(
    input wire video_on,
	input wire clk, reset,
	input [9:0] mouse_x, mouse_y,
	input wire [9:0] pix_x, pix_y,
	input vsync,
	output [2:0] graph_rgb
);
	
	localparam RADIUS = 10;
	
	localparam CIRCLE_COLOR = 3'b101; // magenta
	localparam BACKGROUND_COLOR = 3'b010; // green


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

	reg rp_reset = 0;

	rope rp(gated_clk, rp_reset, mouse_x, mouse_y, nodes_x, nodes_y);

	wire gated_clk;
	reg enable;
	assign gated_clk = clk && enable;

	reg [2:0] clk_count;


	always @(posedge clk) begin
		if (reset) begin
			rp_reset <= 1;
		end
		if (clk_count != 3'b110 && enable) begin
			clk_count <= clk_count + 1;
			
			rp_reset <= 0;

		end
		else if (clk_count == 3'b110) begin
			enable <= 0;
		end
		
			
	end


	always @(negedge vsync) begin
		enable <= 1;
		clk_count <= 0;
	end




	wire collides;
	
	// check of the current pixel is inside our object
	wire [19:0] collides_vec;
	genvar j;
		generate
		for (j = 0; j < 20; j = j + 1) begin
			assign collides_vec[j] = (node_x_pos[j] - pix_x) * (node_x_pos[j] - pix_x) + 
	        (node_y_pos[j] - pix_y) * (node_y_pos[j] - pix_y) <= RADIUS * RADIUS;
		end
		endgenerate

	assign collides = |collides_vec;


	assign graph_rgb = video_on ? collides ? CIRCLE_COLOR : BACKGROUND_COLOR : 3'b000;



endmodule



