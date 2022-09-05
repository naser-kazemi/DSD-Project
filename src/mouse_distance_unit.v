module mouse_distance_unit #(
    parameter width = 32
) (
    input wire[width-1:0] x_pos,
    input wire[width-1:0] y_pos, 
    input wire[width-1:0] x_mouse,
    input wire[width-1:0] y_mouse,
    output wire[width-1:0] x_affected
);
    
    wire[width-1:0] x_dist;
    wire[width-1:0] abs_x_dist;
    wire[width-1:0] y_dist;
    wire[width-1:0] abs_y_dist;

    assign x_dist = x_mouse - x_pos;
    assign y_dist = y_mouse - y_pos;
    assign abs_dist_x = x_dist[width-1] ? -x_dist: x_dist;
    assign abs_dist_y = y_dist[width-1] ? -y_dist: y_dist;

    assign is_close = (abs_y_dist >> 12 < 20 && abs_x_dist >> 12 < 20)? 1: 0;
    assign x_affected = x_dist[width-1]? x_pos + 32'h0000a000: x_pos - 32'h0000a000;

endmodule