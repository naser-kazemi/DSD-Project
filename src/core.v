`include "core_control_unit.v"
`include "verlet_integration_unit.v"
`include "core_alu_input_selector.v"
`include "enforce_constraint_unit.v"
`include "mouse_distance_unit.v"

module core #(
    parameter node_contains = 5,
    parameter core_id = 1,
    parameter width = 32
) (
    input wire clk, 
    input wire reset,
    input wire is_last_core,
    input wire [width-1:0] x_mouse,
    input wire [width-1:0] y_mouse,
    input wire [width-1:0] upper_x_node,
    input wire [width-1:0] upper_y_node,
    input wire [width-1:0] lower_x_node,
    input wire [width-1:0] lower_y_node,
    output wire [width-1:0] last_integrated_node_x,
    output wire [width-1:0] last_integrated_node_y,
    output wire [(width-1) * node_contains - 1:0] all_nodes_x_position,
    output wire [(width-1) * node_contains - 1:0] all_nodes_y_position
);


reg [4*(width)-1:0] ram[node_contains-1:0];
wire [width-1:0] verlet_cnt_sig;
wire [width-1:0] data_in_address_1, data_in_address_2;
wire [width-1:0] fix_cnst_sig;
wire is_enable;
core_control_unit cu(
    .clk(clk),
    .reset(reset),
    .is_last_core(is_last_core),
    .verlet_cnt_sig(verlet_cnt_sig),
    .fix_cnst_cnt_sig(fix_cnst_sig),
    .ram_data_in_address(data_in_address_1),
    .ram_data_in_address_2(data_in_address_2),
    .is_enable(is_enable)
);


 wire [node_contains*4*width -1:0] ram_flatted;

wire [width-1:0] x_position, y_position,
  pre_x_position, pre_y_position, integrated_y,
  integrated_x, prev_node_x_position, prev_node_y_position; 


 genvar i;
  generate for (i = 0; i < node_contains; i = i+1) begin
    assign ram_flatted[4*width*i +: 4*width] = ram[i]; 
  end endgenerate


core_alu_input_selector ins(
    .ram_flatted(ram_flatted),
    .v_selector(verlet_cnt_sig),
    .f_selector(fix_cnst_sig),
    .pre_x_position(pre_x_position),
    .pre_y_position(pre_y_position),
    .x_position(x_position),
    .y_position(y_position),
    .prev_node_x_position(prev_node_x_position),
    .prev_node_y_position(prev_node_y_position)
);

verlet_integration_unit viu(
    .x_position(x_position), 
    .y_position(y_position),
    .pre_x_position(pre_x_position),
    .pre_y_position(pre_y_position),
    .integrated_x(integrated_x),
    .integrated_y(integrated_y)
); 

wire[width-1:0] node_x_enforced, node_y_enforced;
assign is_last_node = (is_last_core == 1) && (fix_cnst_sig[node_contains-1]);

enforce_constraint_unit ecu(
    .up_x_pos(upper_x_node),
    .up_y_pos(upper_y_node),
    .x_pos(prev_node_x_position),
    .y_pos(prev_node_y_position),
    .down_x_pos(lower_x_node),
    .down_y_pos(lower_y_node),
    .is_last(is_last_node),
    .x_enforced_constraints(node_x_enforced),
    .y_enforced_constraints(node_y_enforced)
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
    ram[data_in_address_1] <= {y_position, pre_x_mouse_affected, integrated_y, integrated_x};
    if(is_enable) ram[data_in_address_2][2*width-1:0] <= {node_y_enforced, node_x_enforced};
end


endmodule