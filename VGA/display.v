`timescale 1ns / 1ps

module display(
	input wire clk, reset,
	input wire u, d, l, r,
	output wire hsync, vsync,
	output wire [2:0] rgb
);
	
	// signal declaration
	wire [9:0] pixel_x , pixel_y;
	wire video_on , pixel_tick;
	reg [2:0] rgb_reg;
	wire [2:0] rgb_next;
	
	// instantiate vga sync circuit 
	vga_sync vga_sync_unit
		(.clk(clk), .reset(reset), .hsync(hsync), .vsync(vsync),
		.video_on(video_on), .p_tick(pixel_tick),
		.pixel_x(pixel_x), .pixel_y(pixel_y)
	);
	
	// instantiate graphics generator
	graphics graphics_unit
		(.video_on(video_on),
		.clk(clk), .reset(reset),
		.u(u), .d(d), .l(l), .r(r),
		.pix_x(pixel_x), .pix_y(pixel_y),
		.graph_rgb(rgb_next)
	);
	
	// rgb buffer 
	always @(posedge clk)
		if(pixel_tick) 
			rgb_reg <= rgb_next ; 
	// output 
	assign rgb = rgb_reg;

endmodule
