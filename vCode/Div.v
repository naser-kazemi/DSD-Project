`include "FixedPointALU.v"

module Div #( 
    parameter N = 32
) (  
    input [N - 1:0] a,
    input [N - 1:0] b,
    output [N - 1:0] out
);


wire [N - 1:0] b_2, b_15, b_67, b_05;

wire [N-1:0] fix_2, fix_15, fix_67, fix_05;

assign fix_2  = 32'h00002000;
assign fix_15 = 32'h00001800;
assign fix_67 = 32'h00000ab8;
assign fix_05 = 32'h00000800;

wire [1:0] op;
assign op = 2'b10;

FixedPointALU mult1(b, fix_2, op, b_2);
FixedPointALU mult2(b, fix_15, op, b_15);
FixedPointALU mult3(b, fix_67, op, b_67);
FixedPointALU mult4(b, fix_05, op, b_05);

wire [N-1:0] div;

assign div = a > b_2 ? 32'h00003000 : a > b_15 ? 32'h00001c00 : a > b_67 ? 32'h00001000 : a > b_05 
        ? 32'h00000948 : 32'h00000571;

wire sign;
assign sign = a[N-1] ^ b[N-1];

wire [N-1:0] out_2cmp = {~sign, ~div[N-2:0] + 1'b1};

assign out = sign ? out_2cmp : div;


endmodule