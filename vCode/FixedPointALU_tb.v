`timescale 1ns/1ps

`include "FixedPointALU.v"

module FixedPointALU_tb ();



parameter N = 32;
parameter Q = 20;


reg clk, reset;

always #0.2 begin
    clk = ~clk;
end


reg [31:0] a, b;
wire [31:0] result;
reg [1:0] op;


FixedPointALU fp_alu(reset, clk, b, a, op, result);


initial begin


    clk = 1'b0;
    reset = 1'b1;

    #0.4
    reset = 0;

    a = 32'hffffe000;
    b = 32'h00002000;
    op = 2'b10;

    #100

    $display("result = %h", result);

    $finish;

    
    
end









    
endmodule