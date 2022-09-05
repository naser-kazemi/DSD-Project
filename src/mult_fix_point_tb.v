`include "mult_fix_point.v"


module mult_fix_point_tb;

wire [31:0] answer;
mult_fix_point m(
    .in_1(32'h00000571),
    .in_2(32'hffffb000),
    .out(answer)
);

initial begin
    #50
    $display("%h", answer);
end

endmodule