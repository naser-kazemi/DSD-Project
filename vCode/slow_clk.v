module slow_clk (
    input clk,
    input reset,
    output reg slow
);


reg [3:0] clk_cnt;


always @(posedge clk) begin
    if (reset)
        slow <= 0;
    else begin
        clk_cnt <= clk + 1;
        if (clk_cnt)
            slow <= slow + 1;
    end
    
end





endmodule