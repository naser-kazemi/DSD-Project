`include "core_control_unit.v"
`include "verlet_integration_unit.v"
`include "input_selector.v"
`include "mouse_distance_unit.v"

module core #(
    parameter node_contains = 5,
    parameter core_id = 1,
    parameter width = 32
) (
    input wire clk, 
    input wire reset,
    input wire [width-1:0] x_mouse,
    input wire [width-1:0] y_mouse,
    input wire [width-1:0] enforce_upper_x;
    input wire [width-1:0] enforce_upper_y;
    input wire [width-1:0] enforce_lower_x;
    input wire [width-1:0] enforce_lower_y;
    output wire [(width-1) * node_contains - 1:0] all_nodes_x_position,
    output wire [(width-1) * node_contains - 1:0] all_nodes_y_position
);


reg [4*(width)-1:0] ram[node_contains-1:0];
wire [width-1:0] verlet_cnt_sig;
wire [width-1:0] data_in_address;

core_control_unit cu(
    .clk(clk),
    .reset(reset),
    .verlet_cnt_sig(verlet_cnt_sig),
    .ram_data_in_address(data_in_address)
);


wire [width-1:0] x_position, y_position,
 pre_x_position, pre_y_position, fixed_x, fixed_y; 

 wire [node_contains*4*width -1:0] ram_flatted;

 genvar i;
  generate for (i = 0; i < node_contains; i = i+1) begin
    assign ram_flatted[4*width*i +: 4*width] = ram[i]; 
  end endgenerate


input_selector is(
    .ram_flatted(ram_flatted),
    .selector(verlet_cnt_sig),
    .pre_x_position(pre_x_position),
    .pre_y_position(pre_y_position),
    .x_position(x_position),
    .y_position(y_position)
);

verlet_integration_unit viu(
    .x_position(x_position), 
    .y_position(y_position),
    .pre_x_position(pre_x_position),
    .pre_y_position(pre_y_position),
    .fixed_x(fixed_x),
    .fixed_y(fixed_y)
); 

wire [width-1:0] pre_x_mouse_affected;
mouse_distance_unit mdu(
    .x_pos(x_position),
    .y_pos(y_position),
    .x_mouse(x_mouse),
    .y_mouse(y_mouse),
    .x_affected(pre_x_mouse_affected)
);


always @(posedge clk ) begin: write_new_verlete_integrated_value
    ram[data_in_address] <= {y_position, pre_x_mouse_affected, fixed_y, fixed_x};
end


endmodule