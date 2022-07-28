`timescale 1ns / 1ps

module display(
	input wire clk, reset,
	// input wire u, d, l, r,
	input [9:0] mouse_x, mouse_y,
	output wire hsync, vsync,
	output wire [2:0] rgb
);
	
	// signal declaration
	wire [9:0] pixel_x, pixel_y;
	wire video_on;
	
	// instantiate vga_controller circuit 
	vga_sync vga_sync_unit(
		.clk(clk), .reset(reset), .hsync(hsync), .vsync(vsync),
		.pixel_x(pixel_x), .pixel_y(pixel_y), .video_on(video_on)
	);
	
	// instantiate graphics generator
	graphics graphics_unit(
		.clk(clk), .reset(reset),
		// .u(u), .d(d), .l(l), .r(r),
		.pix_x(pixel_x), .pix_y(pixel_y),
		.mouse_x(mouse_x), .mouse_y(mouse_y),
		.video_on(video_on), .graph_rgb(rgb)
	);

endmodule
