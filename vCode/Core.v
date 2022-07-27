`include "Node.v"
`include "Sequencer.v"
`include "circular_shift.v"


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

wire[2 * node_contains - 1:0] control_signal; 
reg[2 * node_contains -1:0] control_signal_reg; 
wire[2 * node_contains -1:0] next_control_signal; 

assign control_signal = control_signal_reg; 
circular_shift #(2 * node_contains) cs(control_signal, next_control_signal); 


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
            control_signal[i],
            control_signal[i + 32],
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
                new_y_pos[i]
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
                new_y_pos[i]
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
                new_y_pos[i]
                );
        end



        

    end
endgenerate


integer j;
always @(posedge clk) begin
    if(!reset) begin
    control_signal_reg <= next_control_signal;
    $display("verlet signals : %d", control_signal);

    for(j = 0; j < node_contains; j = j + 1)begin
        $display("node %d \n y : %h \n x : %h\n***********************", j, y_pos[j], x_pos[j]);
    end
    end
end



generate

endgenerate


endmodule