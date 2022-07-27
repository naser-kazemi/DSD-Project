`timescale 1ns / 1ps

module graphics(
	input wire [200 - 1:0] nodes_x,
	input wire [200 - 1:0] nodes_y,
	input wire video_on,
	input wire clk, reset,
	input wire u, d, l, r,
	input wire [9:0] pix_x, pix_y,
	input wire[9:0] next_x, next_y,
	output reg [2:0] graph_rgb
);


	wire [9:0] node_x_pos [19:0];
	wire [9:0] node_y_pos [19:0];

	genvar i;
	generate
		for (i = 0; i < 20; i = i + 1) begin
			assign node_x_pos[i] = nodes_x[i * 10 + 9:i * 10];
			assign node_y_pos[i] = nodes_y[i * 10 + 9:i * 10];
		end
	endgenerate

	
	localparam BALL_SIZE = 10;
	localparam BALL_RADIUS = BALL_SIZE >> 1;
	
	// signal declaration
	reg [9:0] ball_x_l, ball_y_t;
	reg [9:0] ball_x_l_next, ball_y_t_next;
	
	reg [9:0] ball_x_r, ball_y_b;
	reg collides;
	
	// sequential logic
	always @(posedge clk)
    begin
        if(reset)
        begin
            ball_x_l <= 0;
            ball_y_t <= 0;
        end
        else
        begin
            ball_x_l <= ball_x_l_next;
            ball_y_t <= ball_y_t_next;
        end
    end
	
	// moving the object based on inputs
	// a maximum of one pixel per clock
	always @(*)
	begin
	    ball_x_l_next = next_x;
	    ball_y_t_next = next_y;
	    
	    /*
	    if(d)
	      ball_y_t_next = ball_y_t + 1; // move down
	    if(u)
	      ball_y_t_next = ball_y_t - 1; // move up
	    if(r)
	      ball_x_l_next = ball_x_l + 1; // move right
	    if(l)
	      ball_x_l_next = ball_x_l - 1; // move left
	      */
	end
	
	// check of the current pixel is inside our object
	always @(*)
	begin
	    ball_x_r = ball_x_l + BALL_SIZE - 1;
	    ball_y_b = ball_y_t + BALL_SIZE - 1;
	    
	    //collides = (ball_x_l <= pix_x) && (pix_x <= ball_x_r) && 
	    //    (ball_y_t <= pix_y) && (pix_y <= ball_y_b);
	        
	    collides = (ball_x_l + BALL_RADIUS - pix_x) * (ball_x_l + BALL_RADIUS - pix_x) + 
	        (ball_y_t + BALL_RADIUS - pix_y) * (ball_y_t + BALL_RADIUS - pix_y) <= BALL_RADIUS * BALL_RADIUS;
	end
	
	// set pixel color based on position
	always @(*)
	begin
	    graph_rgb = 3'b000; // black
	    if (video_on)
	        graph_rgb = 3'b111; // white
	    if (video_on && collides)
		    graph_rgb = 3'b001; // red
	end

endmodule
