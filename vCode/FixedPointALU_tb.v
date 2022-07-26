`include "FixedPointALU.v"

module FixedPointALU_tb ();


reg [31:0] x, y;
wire [31:0] result;
reg [1:0] op;


FixedPointALU fp_alu(x, y, op, result);


initial begin

    x = 32'h00200000;
    y = 32'h00200000;
    op = 2'b10;

    #2
    $display("result = %h", result);
    
end









    
endmodule