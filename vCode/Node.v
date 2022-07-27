`include "EnforceConstraint.v"


module Node #(
    parameter node_id = 1
) (
    input wire clk,
    input wire reset,
    input wire verlet_state, 
    input wire fix_constraint_state, 
    input wire[31:0] x_fix_constraint, 
    input wire[31:0] y_fix_constraint,
    output wire[31:0] x_pos,
    output wire[31:0] y_pos
);

wire verlet_x, verlet_y, fix_const_x, fix_const_y;
wire in_x_ff, in_y_ff;


reg[31:0] x; reg [31:0] y; reg [31:0] px; reg [31:0] py;
assign x_pos = x;
assign y_pos = y;

integer base_x = 32'h0c8000;   
integer dist = 32'h00a000;

reg[31:0] fix_2 = 32'h00002000 ;
reg[31:0] fix_gravity = 32'h000004cd ;
reg[1:0] operation_mult = 2;
reg[1:0] operation_sub = 1; 
wire[31:0] x_mult_2_out; 
wire[31:0] y_mult_2_out;
wire[31:0] next_x;
wire[31:0] next_y;
wire[31:0] reset_y;
wire[31:0] py_sub_gravity;

wire[31:0] node_id_wire; 
assign node_id_wire = node_id << 12;


assign py_sub_gravity = py - fix_gravity;
FixedPointALU x_mult_2(x,fix_2, operation_mult, x_mult_2_out);
FixedPointALU twoX_sub_px(x_mult_2_out, px, operation_sub, next_x);
FixedPointALU y_mult_2(y, fix_2, operation_mult, y_mult_2_out);
FixedPointALU twoY_sub(y_mult_2_out, py_sub_gravity, operation_sub, next_y);

FixedPointALU y_reset(dist, node_id_wire, operation_mult, reset_y);

always @(posedge clk) begin: calc_verlet_x
    if (reset) begin
        x <= base_x;
        px <= base_x; 
        y <= reset_y;
        py <= reset_y;
    end else if(verlet_state)begin
        px <= x; 
        py <= y;
        x <= next_x;
        y <= next_y;
    end else if(fix_constraint_state)begin
        x <= x_fix_constraint;
        y <= y_fix_constraint;
    end else begin
        x <= x; 
        y <= y;
    end
 
end

endmodule
