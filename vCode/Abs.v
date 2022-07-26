module Abs #( 
    parameter N = 32
)
(
    input wire[31:0] number, 
    output [31:0] abs_number
);


wire [N - 1:0] number_2cmp;

assign number_2cmp = {~number[N - 1],~number[N - 2:0]+ 1'b1};

assign abs_number = number[N - 1] ? number_2cmp : number;

endmodule