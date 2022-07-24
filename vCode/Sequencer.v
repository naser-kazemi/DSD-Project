module Sequencer #(
    parameter upper_bound = 1
) (
    input wire clk,
    input wire able,
    output wire[31:0] clk_count
);

reg [31:0] counter = 0;
always @(clk) begin: update_counter
    if(able)begin
        if (counter == upper_bound)begin
            counter <= 0;
        end else begin
            counter <= counter + 1;
        end
    end
end


assign clk_count = counter;
endmodule