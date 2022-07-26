`include "Abs.v"

module Abs_tb; 
reg[31:0] neg_2;
wire[31:0] result; 

Abs abs(neg_2, result); 
    initial
        begin
        neg_2 = 32'h00002000;
        #2
        if(result == 32'h00002000 ) begin
            $display("passed"); 
        end

        neg_2 = 32'h0021a800;
        #2
        if(result == 32'h0021a800 ) begin
            $display("passed"); 
        end

        neg_2 = 32'hffe7aa8f;
        #2
        if(result == 32'h00185571 ) begin
            $display("passed"); 
        end


        end



endmodule