`timescale 1ns / 1ps

module vga_sync(
	input  wire clk, reset,
	
	output reg hsync, vsync,
	output reg [9:0] pixel_x, pixel_y,
	output reg video_on
);

	// 640X480 VGA sync parameters
	localparam LEFT_PORCH		= 	48;
	localparam ACTIVE_WIDTH		= 	640;
    localparam RIGHT_PORCH		= 	16;
	localparam HORIZONTAL_SYNC	=	96;
	localparam TOTAL_WIDTH		=	800;
	
	localparam TOP_PORCH		= 	33;
	localparam ACTIVE_HEIGHT	= 	480;
    localparam BOTTOM_PORCH		= 	10;
	localparam VERTICAL_SYNC	=	2;
	localparam TOTAL_HEIGHT		=	525;

	// next state regs
	reg hsync_next, vsync_next;
	reg [9:0] pixel_x_next, pixel_y_next;
	reg video_on_next;
	
	// sequential logic
	always @(posedge clk)
	begin
		if(reset)
		begin
			hsync <= 0;
			vsync <= 0;
			pixel_x <= 0;
			pixel_y <= 0;
			video_on <= 0;
		end
		else
		begin
			hsync <= hsync_next;
			vsync <= vsync_next;
			pixel_x <= pixel_x_next;
			pixel_y <= pixel_y_next;
			video_on <= video_on_next;
		end
	end
	
	// combinational logic
	always @(*)
	begin
		hsync_next = pixel_x >= RIGHT_PORCH + ACTIVE_WIDTH && 
					  pixel_x < RIGHT_PORCH + ACTIVE_WIDTH + HORIZONTAL_SYNC;
		vsync_next	= pixel_y >= TOP_PORCH + ACTIVE_HEIGHT && 
					  pixel_y < TOP_PORCH + ACTIVE_HEIGHT + VERTICAL_SYNC;
		
		
		if(pixel_x == TOTAL_WIDTH - 1)
		begin
			pixel_x_next = 0;
			if(pixel_y == TOTAL_HEIGHT - 1)
				pixel_y_next = 0;
			else
				pixel_y_next = pixel_y + 1;
		end
		else
		begin
			pixel_x_next = pixel_x + 1;
			pixel_y_next = pixel_y;
		end
			
			
		video_on_next = pixel_x < ACTIVE_WIDTH && pixel_y < ACTIVE_HEIGHT;
	end


endmodule
