`include "div.v"

module div_tb;

reg [31:0] a, b;
wire [31:0] result;

div d(a, b, result);

initial begin

    a = 32'hfffb19c3;
    b = 32'h000c8000;

    #20

    $display("result = %h", result);

    
end





endmodule