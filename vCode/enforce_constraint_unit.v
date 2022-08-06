`include "div.v"


module enforce_constraint_unit #( 
    parameter id = 1,
    parameter width = 32
) (
    input wire[width-1:0] up_x_pos,
    input wire[width-1:0] up_y_pos,
    input wire[width-1:0] x_pos,
    input wire[width-1:0] y_pos,
    input wire[width-1:0] down_x_pos,
    input wire[width-1:0] down_y_pos,
    input wire is_last,
    output [width-1:0] x_enforced_constraints,
    output [width-1:0] y_enforced_constraints
);

wire [width-1:0] dxu, dyu, du;
assign dxu = x_pos - up_x_pos;
assign dyu = y_pos - up_y_pos;

wire [width-1:0] abs_dxu, abs_dyu;

assign abs_dxu = dxu[width-1] ? -dxu: dxu;
assign abs_dyu = dyu[width-1] ? -dyu: dyu;

assign du = abs_dxu + abs_dyu;


wire [width-1:0] temp_dxd, temp_dyd, temp_dd;

assign sub_xd = x_pos - down_x_pos;
assign sub_yd = y_pos - down_y_pos;

wire [width-1:0] abs_dxd, abs_dyd;

assign abs_dxd = temp_dxd[width-1]? -temp_dxd: temp_dxd;
assign abs_dyd = temp_dyd[width-1]? -temp_dyd: temp_dyd;
assign temp_dd = abs_dxd + abs_dyd;

wire [width-1:0] dxd, dyd, dd;
assign dxd = !is_last ? temp_dxd : dxu;
assign dyd = !is_last ? temp_dyd : dyu;
assign dd = !is_last ? temp_dd : du;



wire [width-1:0] div_xu, div_yu, div_xd, div_yd;
div div1(dxu, du, div_xu);
div div2(dyu, du, div_yu);
div div3(dxd, dd, div_xd);
div div4(dyd, dd, div_yd);


wire [width-1:0] dots_dist;

assign dots_dist = 32'h0000f000;

wire [width-1:0] du_dist, dd_dist;

assign du_dist = du - dots_dist;
assign dd_dist = dd - dots_dist;

wire [width-1:0] mult_xu, mult_yu, mult_xd, mult_yd;
mult_fix_point mult1(div_xu, du_dist, mult_xu);
mult_fix_point mult2(div_yu, du_dist, mult_yu);
mult_fix_point mult3(div_xd, dd_dist, mult_xd);
mult_fix_point mult4(div_yd, dd_dist, mult_yd);


wire [width-1:0] sum_x, sum_y;
assign sum_x = mult_xu + mult_xd;
assign sum_y = mult_yu + mult_yd;

wire [width-1:0] sum_x_by_4, sum_y_by_4, temp_sum_x, temp_sum_y;
assign temp_sum_x = sum_x >>> 2;
assign temp_sum_y = sum_y >>> 2;
assign sum_x_by_4 = {sum_x[width-1:width-2], temp_sum_x[width-3:0]};
assign sum_y_by_4 = {sum_y[width-1:width-2], temp_sum_y[width-3:0]};


assign x_enforced_constraints = x_pos - sum_x_by_4;
assign y_enforced_constraints = y_pos - sum_y_by_4;

endmodule