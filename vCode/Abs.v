module Abs (
    input wire[31:0] number, 
    output reg[31:0] abs_number
);

assign number_2cmp = {~number[31],~number[30:0]+ 1'b1};
    always @(*)begin
        if (number[31]) begin
            abs_number = number_2cmp;
        end else begin
            abs_number = number;
        end
    end
endmodule