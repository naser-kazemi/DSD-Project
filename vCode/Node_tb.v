`include "Node.v"

module Node_tb; 
    reg clk, reset, verlet_state, fix_constraint_state; 
    reg [31:0] fix_x, fix_y;
    wire [31:0] out_x, out_y; 
    wire finish_sig;
    Node node(clk, reset, verlet_state, fix_constraint_state, fix_x, fix_y, out_x, out_y); 

    initial clk = 1'b0; 
    always #5 clk = ~clk;

    initial
    begin
        reset = 1;
        verlet_state = 0; fix_constraint_state = 0; fix_x = 200; fix_y = 200;
        #10
        if (out_x == 200 && out_y == 10) begin
            $display("passed");
        end
        
        reset = 0; verlet_state = 1; fix_constraint_state = 1;
        #10
        if(out_x == 200) begin
            $display("passed");
        end

    end
endmodule