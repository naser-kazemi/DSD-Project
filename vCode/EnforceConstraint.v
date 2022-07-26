`include "FixedPointALU.v"
`include "Abs.v"
`include "Div.v"


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




wire [1:0] add_op, sub_op, mult_op;
assign add_op = 2'b00;
assign sub_op = 2'b01;
assign mult_op = 2'b10;


wire [31:0] dxu, dyu, du;
FixedPointALU sub_xu(x_pos, up_x_pos, sub_op, dxu);
FixedPointALU sub_yu(y_pos, up_y_pos, sub_op, dyu);

wire [31:0] abs_dxu, abs_dyu;
Abs abs1(dxu, abs_dxu);
Abs abs2(dyu, abs_dyu);
FixedPointALU add_du(abs_dxu, abs_dyu, add_op, du);



wire [31:0] dxd, dyd, dd;
FixedPointALU sub_xd(x_pos, down_x_pos, sub_op, dxd);
FixedPointALU sub_yd(y_pos, down_y_pos, sub_op, dyd);

wire [31:0] abs_dxd, abs_dyd;
Abs abs3(dxd, abs_dxd);
Abs abs4(dyd, abs_dyd);
FixedPointALU add_dd(abs_dxd, abs_dyd, add_op, dd);



wire [31:0] div_xu, div_yu, div_xd, div_yd;
Div div1(dxu, du, div_xu);
Div div2(dyu, du, div_yu);
Div div3(dxd, dd, div_xd);
Div div4(dyd, dd, div_yd);


wire [31:0] dots_dist;
//TODO assign value to dots_dist

wire [31:0] du_dist, dd_dist;
FixedPointALU sub_du(du, dots_dist, sub_op, du_dist);
FixedPointALU sub_dd(dd, dots_dist, sub_op, dd_dist);



wire [31:0] mult_xu, mult_yu, mult_xd, mult_yd;
FixedPointALU mult1(div_xu, du_dist, mult_op, mult_xu);
FixedPointALU mult2(div_yu, du_dist, mult_op, mult_yu);
FixedPointALU mult3(div_xd, dd_dist, mult_op, mult_xd);
FixedPointALU mult4(div_yd, dd_dist, mult_op, mult_yd);


wire [31:0] sum_x, sum_y;
FixedPointALU sum1(mult_xu, mult_xd, add_op, sum_x);
FixedPointALU sum2(mult_yu, mult_yd, add_op, sum_y);


wire [31:0] sum_x_by_4, sum_y_by_4;
assign sum_x_by_4 = sum_x >> 2;
assign sum_y_by_4 = sum_y >> 2;


FixedPointALU new_x(x_pos, sum_x_by_4, sub_op, x_enforced_constraints);
FixedPointALU new_y(y_pos, sum_y_by_4, sub_op, y_enforced_constraints);




endmodule