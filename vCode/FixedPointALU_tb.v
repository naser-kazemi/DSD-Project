`include "FixedPointALU.v"

module FixedPointALU_tb ();

parameter N = 32;
parameter Q = 12;


reg [31:0] a, b;
wire [31:0] result;
reg [1:0] op;


FixedPointALU fp_alu(a, b, op, result);


initial begin

    a = 32'h003851ec;
    b = 32'h00663d71;
    op = 2'b10;

    #2
    $display("result = %h", result);

    
    
end









    
endmodule