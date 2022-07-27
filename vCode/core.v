`include "Node.v"
`include "circular_shift.v"


module core #(
    parameter node_contains = 5,
    parameter core_id = 1
) (
  input wire clk, 
  input wire reset,
  input wire [31:0] prev_core_last_x,
  input wire [31:0] prev_core_last_y,
  input wire [31:0] next_core_first_x,
  input wire [31:0] next_core_first_y,
  input wire [31:0] x_mouse,
  input wire [31:0] y_mouse,
  input wire is_last,
  output wire[node_contains * 32 -1:0] nodes_x,
  output wire[node_contains * 32 -1:0] nodes_y
);

wire[2 * node_contains - 1:0] control_signal; 
reg[2 * node_contains -1:0] control_signal_reg;
wire[2 * node_contains -1:0] next_control_signal; 

assign control_signal = control_signal_reg; 
circular_shift #(2 * node_contains) cs(control_signal, next_control_signal); 

wire [31:0] x_pos[node_contains - 1:0]; 
wire [31:0] y_pos[node_contains - 1:0];
wire [31:0] new_x_pos[node_contains - 1:0];
wire [31:0] new_y_pos[node_contains - 1:0];
wire [31:0] clk_count;
wire [node_contains -1:0] finish_signal;

wire [node_contains -1:0] is_last_node_of_last_core;




genvar i;
generate
    for(i = 0; i < node_contains; i = i + 1) begin
        assign is_last_node_of_last_core[i] = is_last && (node_contains - 1 == i); 
        assign nodes_x[(i + 1) * 32 - 1: i * 32] = x_pos[i];
        assign nodes_y[(i + 1) * 32 - 1: i * 32] = y_pos[i];
        
        Node #(
            i + 1
        ) node(
            clk,
            reset,
            control_signal[i],
            control_signal[i + node_contains],
            new_x_pos[i],
            new_y_pos[i],
            x_mouse, 
            y_mouse,
            x_pos[i],
            y_pos[i]
            );

        if (i == 0 && core_id != 1) begin
            EnforceConstraint enforce_constraint(
                prev_core_last_x,
                prev_core_last_y,
                x_pos[i],
                y_pos[i],
                x_pos[i + 1],
                y_pos[i + 1],
                is_last_node_of_last_core[i],
                new_x_pos[i],
                new_y_pos[i]
                );
        end else begin
            assign new_x_pos[0] = x_pos[0];
            assign new_y_pos[0] = y_pos[0];
        end


        if (i > 0 && i < node_contains - 1) begin
            EnforceConstraint enforce_constraint(
                x_pos[i - 1],
                y_pos[i - 1],
                x_pos[i],
                y_pos[i],
                x_pos[i + 1],
                y_pos[i + 1],
                is_last_node_of_last_core[i],
                new_x_pos[i],
                new_y_pos[i]
                );
        end

        if (i == node_contains - 1) begin
            EnforceConstraint enforce_constraint(
                x_pos[i - 1],
                y_pos[i - 1],
                x_pos[i],
                y_pos[i],
                next_core_first_x,
                next_core_first_y,
                is_last_node_of_last_core[i],
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
    // $display("control signal : %d", control_signal);

    for(j = 0; j < node_contains; j = j + 1)begin
        $display("node %d \n y : %h \n x : %h\n***********************", j, y_pos[j], x_pos[j]);
        $display("new_y : %h\nnew_x : %h\n***********************", new_y_pos[j], new_x_pos[j]);
    end
    end else begin
        control_signal_reg <= 1;
    end
end



generate

endgenerate


endmodule