`include "Abs.v"

module Abs_tb; 
reg[31:0] neg_2;
wire[31:0] result; 

Abs abs(neg_2, result); 
    initial
        begin
        #2
        if(result == 32'h00002000 ) begin
            $display("passed"); 
        end
        end
endmodule