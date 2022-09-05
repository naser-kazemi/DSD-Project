module verlet_integration_unit #(
    parameter width = 32
) (
    input wire [width-1:0] x_position,
    input wire [width-1:0] y_position,
    input wire [width-1:0] pre_x_position,
    input wire [width-1:0] pre_y_position, 
    output wire [width-1:0] integrated_x,
    output wire [width-1:0] integrated_y
);

reg[1:0] sub_sig = 2'b01;
reg[1:0] mult_sig = 2'b10; 

wire [width-1:0] x_mult2, y_mult2, y_2sub, fix_diff;
assign x_mult2 = x_position << 1;
assign y_mult2 = y_position << 1;

assign fix_point_gravity = 32'h00000333;

assign integrated_x = x_mult2 - pre_x_position;
assign integrated_y = y_mult2 - pre_y_position + fix_point_gravity;



endmodule