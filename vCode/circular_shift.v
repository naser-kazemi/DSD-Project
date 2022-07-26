module circular_shift #(
    parameter N = 32
) (
    input wire[N-1:0] number,
    output wire[N-1:0] shifted_number
); 

assign shifted_number = {number[N-2:0], number[N-1]};

endmodule