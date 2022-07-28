`timescale 1ns / 1ps

`include "rope.v"
`include "slow_clk.v"

module graphics(
    input wire video_on,
	// input wire clk, reset,
	// input wire u, d, l, r,
	input [9:0] mouse_x, mouse_y,
	input wire [9:0] pix_x, pix_y,
	
	output [2:0] graph_rgb
);
	
	localparam RADIUS = 5;
	
	localparam CIRCLE_COLOR = 3'b101; // magenta
	localparam BACKGROUND_COLOR = 3'b010; // green
	
	// signal declaration
	reg [9:0] center_x, center_y;

	// next state regs
	reg [9:0] center_x_next, center_y_next;


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

	wire slow;
	slow_clk sc(clk, reset, slow);

	rope rp(slow, reset, mouse_x, mouse_y, nodes_x, nodes_y);
	
	// sequential logic
	// always @(posedge clk)
    // begin
    //     if(reset)
    //     begin
    //         center_x <= 100;
    //         center_y <= 100;
    //     end
    //     else
    //     begin
    //         center_x <= center_x_next;
    //         center_y <= center_y_next;
    //     end
    // end
	
	// moving the circle by one pixel based on inputs
	// always @(*)
	// begin
	//     center_x_next = center_x;
	//     center_y_next = center_y;
	    
	//     if(u)
	//       center_y_next = center_y - 1;
	//     if(d)
	//       center_y_next = center_y + 1;
	//     if(l)
	//       center_x_next = center_x - 1;
	//     if(r)
	//       center_x_next = center_x + 1;
	// end

	reg clk, reset; 
	// reg[9:0] mouse_x, mouse_y; 
	// wire [4 * 5 * 10 - 1:0] nodes_x, nodes_y;
	initial clk = 1'b0; 
	always #5 clk = ~clk;

	initial
	begin
		reset = 1;
		#10;
		reset = 0; 
		#1010;

		$display("node_x = %h ", nodes_x[19 * 10 + 9:19 * 10]);

		$finish;

	end



	wire collides;
	
	// check of the current pixel is inside our object
	wire [19:0] collides_vec;
	genvar j;
	// always @(pix_x, pix_y)
	// begin
		generate
		for (j = 0; j < 20; j = j + 1) begin
			assign collides_vec[j] = (node_x_pos[j] - pix_x) * (node_x_pos[j] - pix_x) + 
	        (node_y_pos[j] - pix_y) * (node_y_pos[j] - pix_y) <= RADIUS * RADIUS;
		end
		endgenerate

	assign collides = |collides_vec;
	
	// set pixel color based on position

	assign graph_rgb = video_on ? collides ? CIRCLE_COLOR : BACKGROUND_COLOR : 3'b000;

	
	// check if the current pixel is inside our circle
	// reg in_circle;
	// always @(*)
	// begin	        
	//     in_circle = (center_x - pix_x) * (center_x - pix_x) + 
	// 	            (center_y - pix_y) * (center_y - pix_y) <= RADIUS * RADIUS;
		
	// 	// default value
	// 	graph_rgb = 3'b000;
	// 	if(video_on)
	// 		graph_rgb = BACKGROUND_COLOR;
	// 	if(video_on && in_circle)
	// 		graph_rgb = CIRCLE_COLOR;
	// end


endmodule





// `timescale 1ns / 1ps

// `include "rope.v"
// // `include "seq.v"

// module graphics(
// 	input wire video_on,
// 	input wire clk, reset,
// 	// input wire u, d, l, r,
// 	input wire [9:0] pix_x, pix_y,
// 	input wire[9:0] mouse_x, mouse_y,
// 	output [2:0] graph_rgb
// );
	
// 	wire [200 - 1:0] nodes_x;
// 	wire [200 - 1:0] nodes_y;

// 	wire [9:0] node_x_pos [19:0];
// 	wire [9:0] node_y_pos [19:0];

// 	genvar i;
// 	generate
// 		for (i = 0; i < 20; i = i + 1) begin
// 			assign node_x_pos[i] = nodes_x[i * 10 + 9:i * 10];
// 			assign node_y_pos[i] = nodes_y[i * 10 + 9:i * 10];
// 		end
// 	endgenerate

// 	rope rp(clk, reset, mouse_x, mouse_y, nodes_x, nodes_y);



// 	localparam BALL_SIZE = 10;
// 	localparam BALL_RADIUS = BALL_SIZE >> 1;
	 
// 	wire collides;
	
// 	// check of the current pixel is inside our object
// 	reg [19:0] collides_vec;
// 	genvar j;
// 	// always @(pix_x, pix_y)
// 	// begin
// 		generate
// 		for (j = 0; j < 20; j = j + 1) begin
// 			assign collides_vec[j] = (node_x_pos[j] + BALL_RADIUS - pix_x) * (node_x_pos[j] + BALL_RADIUS - pix_x) + 
// 	        (node_y_pos[j] + BALL_RADIUS - pix_y) * (node_y_pos[j] + BALL_RADIUS - pix_y) <= BALL_RADIUS * BALL_RADIUS;
// 		end
// 		endgenerate

// 	assign collides = |collides_vec;
	
// 	// set pixel color based on position

// 	assign graph_rgb = video_on ? collides ? 3'b001 : 3'b111 : 3'b000;

// endmodule