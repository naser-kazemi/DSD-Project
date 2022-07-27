`include "Node.v"
`include "Sequencer.v"
`include "circular_shift.v"
`include "EnforceConstraint.v"

module core #(
    parameter node_contains = 5
) (
  input wire clk, 
  input wire reset,
  input wire [31:0] prev_core_last_x,
  input wire [31:0] prev_core_last_y,
  input wire [31:0] next_core_first_x,
  input wire [31:0] next_core_first_y
);

reg[node_contains:0] verlet_state = 1;
wire[node_contains:0] verlet_state_wire; 
wire[node_contains:0] shifted_verlet_state;
assign verlet_state_wire = verlet_state; 



wire fix_constrante_state[node_contains -1:0]; 
wire [31:0] x_enforced_constraint[node_contains - 1:0]; 
reg [31:0]  y_enforced_constraint[node_contains - 1:0];
wire [31:0] x_pos[node_contains - 1:0]; 
wire [31:0] y_pos[node_contains - 1:0];
wire [31:0] new_x_pos[node_contains - 1:0];
wire [31:0] new_y_pos[node_contains - 1:0];
wire [31:0] clk_count;
wire [node_contains -1:0] finish_signal;




genvar i;
generate
    for(i = 0; i < node_contains; i = i + 1) begin
        Node #(
            i
        ) node(
            clk,
            reset,
            verlet_state[i],
            fix_constrante_state[i],
            x_enforced_constraint[i], 
            y_enforced_constraint[i],
            x_pos[i],
            y_pos[i]
            );

        if (i == 0) begin
            EnforceConstraint #(
                i
            ) enforce_constraint(
                prev_core_last_x,
                prev_core_last_y,
                x_pos[i],
                y_pos[i],
                x_pos[i + 1],
                y_pos[i + 1],
                new_x_pos[i],
                new_y_pos[i],
                );
        end


        if (i > 0 && i < node_contains - 1) begin
            EnforceConstraint #(
                i
            ) enforce_constraint(
                x_pos[i - 1],
                y_pos[i - 1],
                x_pos[i],
                y_pos[i],
                x_pos[i + 1],
                y_pos[i + 1],
                new_x_pos[i],
                new_y_pos[i],
                );
        end

        if (i == node_contains - 1) begin
            EnforceConstraint #(
                i
            ) enforce_constraint(
                x_pos[i - 1],
                y_pos[i - 1],
                x_pos[i],
                y_pos[i],
                next_core_first_x,
                next_core_first_y,
                new_x_pos[i],
                new_y_pos[i],
                );
        end



        

    end
endgenerate

circular_shift #(node_contains + 1) cs(verlet_state_wire, shifted_verlet_state);

integer j;
always @(posedge clk) begin
    if(!reset) begin
    verlet_state <= shifted_verlet_state;
    $display("verlet signals : %d", verlet_state);

    for(j = 0; j < node_contains; j = j + 1)begin
        $display("node %d \n y : %h \n x : %h\n***********************", j, y_pos[j], x_pos[j]);
    end
    end
end



generate

endgenerate


endmodule