module slow_clk (
    input clk,
    input reset,
    output reg slow
);


reg [2:0] clk_cnt;


always @(posedge clk) begin
    if (reset)
        slow <= 1;
    else begin
        clk_cnt <= clk_cnt + 1;
        if (clk_cnt == 0)
            slow <= slow + 1;
    end
    
end





endmodule