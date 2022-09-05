module seq #(
    parameter upper_bound = 11
) (
    input wire clk, 
    input wire reset,
    output reg[31:0] clk_count
);
    
    always @(posedge clk ) begin
        if(reset)begin
            clk_count <= 0;
        end else begin
            clk_count <= clk_count + 1;
        end
    end
endmodule