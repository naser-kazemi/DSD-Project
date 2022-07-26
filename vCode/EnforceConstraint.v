`include "FixedPointALU.v"


module EnforceConstraints (
    input wire[31:0] up_x_pos,
    input wire[31:0] up_y_pos,
    input wire[31:0] x_pos,
    input wire[31:0] y_pos,
    input wire[31:0] down_x_pos,
    input wire[31:0] down_y_pos,
    output [31:0] x_enforced_constraints,
    output [31:0] y_enforced_constraints
);


wire [31:0] dxu, dyu, du;

reg [1:0] op = 2'b01;

FixedPointALU sub_xu(x_pos, up_x_pos, op, dxu);
FixedPointALU sub_yu(y_pos, up_y_pos, op, dyu);


wire [31:0] dxd, dyd, dd;

assign dxd = x_pos - down_x_pos;
assign dyd = y_pos - down_y_pos;


// du and dx













endmodule