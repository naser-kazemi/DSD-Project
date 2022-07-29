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
    mouse_x = 32'h00000000;
    mouse_y = 32'h00000000;
    reset = 1;
    #10;
    reset = 0; 
    // #1010

    mouse_x = 32'h000ca000;
    mouse_y = 32'h00032000;

    #1010

    mouse_x = 32'h00000000;
    mouse_y = 32'h00000000;

    #1010;

    // $display("node_x = %h ", nodes_x[189:180]);

    $finish;

end

endmodule