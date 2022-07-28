`include "FixedPointALU.v"
`include "Abs.v"

module Div #( 
    parameter N = 32
) (  
    input [N - 1:0] a,
    input [N - 1:0] b,
    output [N - 1:0] out
);

wire [31:0] abs_a, abs_b;

Abs abs1(a, abs_a);
Abs abs2(b, abs_b);


wire [N - 1:0] b_2, b_15, b_67, b_05;

wire [N-1:0] fix_2, fix_15, fix_67, fix_05;

assign fix_2  = 32'h00002000;
assign fix_15 = 32'h00001800;
assign fix_67 = 32'h00000ab8;
assign fix_05 = 32'h00000800;

wire [1:0] op;
assign op = 2'b10;

FixedPointALU mult1(abs_b, fix_2, op, b_2);
FixedPointALU mult2(abs_b, fix_15, op, b_15);
FixedPointALU mult3(abs_b, fix_67, op, b_67);
FixedPointALU mult4(abs_b, fix_05, op, b_05);

wire [N-1:0] div, neg_div;

assign div = abs_a > b_2 ? 32'h00003000 : abs_a > b_15 ? 32'h00001c00 : abs_a > b_67 ? 32'h00001000 : abs_a > b_05 
        ? 32'h00000948 : 32'h00000571;

assign neg_div = abs_a > b_2 ? 32'hffffd000 : abs_a > b_15 ? 32'hffffe400 : abs_a > b_67 ? 32'hfffff000 : abs_a > b_05 
        ? 32'hfffff6b8 : 32'hfffffa8f;



assign out = a[31] ^ b[31] ? neg_div : div;




endmodule