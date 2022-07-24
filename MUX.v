module MUX (
    input wire[2:0] control_sig, 
    input wire p1, 
    input wire p2,
    input wire p3,
    output reg out
);

always @(*) begin
    case (control_sig)
        1: out = p1;
        2: out = p2;
        4: out = p3;
        default: out = 1'bz;
    endcase
end

endmodule