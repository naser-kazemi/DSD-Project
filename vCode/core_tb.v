`include "core.v"

module core_tb;

    reg reset;
    reg clk;
    initial clk = 1'b0; 
    always #5 clk = ~clk;
    reg[31:0] prev_x, prev_y;
    reg[31:0] next_x, next_y; 
   

    core #(5, 1)c0(.clk(clk),
     .reset(reset),
     .prev_core_last_x(prev_x),
     .prev_core_last_y(prev_y), 
     .next_core_first_x(next_x),
     .next_core_first_y(next_y)
     );

  

    initial
    begin
        next_x = 32'h000c8000;
        next_y = 32'h00032e66;
        reset = 1; 
        #10;
        reset = 0; 
        #170;
        $stop;
    end

endmodule