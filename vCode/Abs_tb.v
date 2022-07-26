`include "Abs.v"

module Abs_tb; 
reg[31:0] neg_2;
wire[31:0] result; 

Abs abs(neg_2, result); 
    initial
        begin
        neg_2 = 32'hffffe000;
        #2
        if(result == 32'h00002000 ) begin
            $display("passed"); 
        end else begin
            $display("failed");
        end
        end
endmodule