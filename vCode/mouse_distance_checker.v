`include "EnforceConstraint.v"

module mouse_distance_checker (
    input wire[31:0] x_pos,
    input wire[31:0] y_pos, 
    input wire[31:0] x_mouse,
    input wire[31:0] y_mouse,
    output reg is_close,
    output reg direction
);
    
    wire[31:0] x_dist;
    wire[31:0] abs_x_dist;
    wire[31:0] y_dist;
    wire[31:0] abs_y_dist;

    reg[1:0] op = 1;

    FixedPointALU sub_x(
        .a(x_pos),
        .b(x_mouse),
        .op(op),
        .out(x_dist)
    );

    Abs abs_dist_x(
        .number(x_dist),
        .abs_number(abs_x_dist)
    );

    FixedPointALU sub_y(
        .a(y_mouse),
        .b(y_pos),
        .op(op),
        .out(y_dist)
    );

    Abs abs_dist_y(
        .number(y_dist),
        .abs_number(abs_y_dist)
    );

    always @(*) begin
        if (abs_y_dist >> 12 < 20 && abs_x_dist >> 12 < 20) begin
            is_close = 1;
        end else begin
            is_close = 0; 
        end

        direction = x_dist[31];
    end

endmodule