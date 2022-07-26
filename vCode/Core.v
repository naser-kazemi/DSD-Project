`include "Node.v"
`include "Sequencer.v"

module Core #(
    parameter node_contains = 5
) (
  input wire clk  
);

wire[node_contains -1:0] verlet_state;
wire fix_constrante_state[node_contains -1:0]; 
wire [31:0] x_enforced_constraint[node_contains - 1:0]; 
reg [31:0]  y_enforced_constraint[node_contains - 1:0];
wire [31:0] x_pos[node_contains - 1:0]; 
wire [31:0] y_pos[node_contains - 1:0];
wire [31:0] clk_count;
Sequencer #(node_contains - 1) seq (clk, !reset, clk_count); 


genvar i;

generate
    for(i = 0; i < node_contains; i = i + 1) begin
        Node node(
            clk,
            reset,
            verlet_state[i],
            fix_constrante_state[i],
            x_enforced_constraint[i], 
            y_enforced_constraint[i],
            x_pos[i],
            y_pos[i]
            );
    end
endgenerate

reg[node_contains - 1:0] verlet_state_reg; 
assign verlet_state = verlet_state_reg; 

always @(posedge clk) begin
    case(clk_count)
        0: verlet_state_reg <= 1;
        1: verlet_state_reg <= 2;
        2: verlet_state_reg <= 4; 
        3: verlet_state_reg <= 8; 
        4: verlet_state_reg <= 16;
    endcase
end


endmodule