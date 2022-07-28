`include "rope.v"



module rope_tb; 

reg clk, reset; 
reg[9:0] mouse_x, mouse_y; 
wire [4 * 5 * 10 - 1:0] nodes_x, nodes_y;
initial clk = 1'b0; 
always #5 clk = ~clk;
rope #(4) r(
    clk, 
    reset,
    mouse_x,
    mouse_y,
    nodes_x,
    nodes_y
);

initial
begin
    reset = 1;
    #10;
    reset = 0; 
    #1010;
    $finish;

end

endmodule