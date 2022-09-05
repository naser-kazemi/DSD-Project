`timescale 1ns/1ps

`include "FixedPointALU.v"

module FixedPointALU_tb ();



parameter N = 32;
parameter Q = 20;


reg [31:0] a, b;
wire [31:0] result;
reg [1:0] op;


FixedPointALU fp_alu(b, a, op, result);


initial begin


    a = 32'hffffe000;
    b = 32'h00002000;
    op = 2'b10;

    #2

    $display("result = %h", result);

    $finish;

    
    
end









    
endmodule