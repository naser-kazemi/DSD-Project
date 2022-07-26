module Decoder(
    input wire[4:0] count,
    output reg[31:0] d_out
);

    always @(*) begin
        case(count)
            0: d_out = 1;
            1: d_out = 2;
            2: d_out = 4;
            3: d_out = 8;
            4: d_out = 16; 
            5: d_out = 32;
            6: d_out = 64;
            7: d_out = 128; 
        endcase
    end
endmodule