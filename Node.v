`include "DflipFlop.v"
`include "MUX.v"
module node #(
    parameter node_id = 1,
    parameter base_x = 200,
    parameter gravity = 0.2
    
) (
    input wire clk,
    input wire reset,
    input wire verlet_state, 
    input wire fix_constraint_state, 
    output x_pos,
    output y_pos
);
wire verlet_x, verlet_y, fix_const_x, fix_const_y;
wire in_x_ff, in_y_ff;


reg[7:0] x; reg [7:0] y; reg [7:0] px; reg [7:0] py;

always @(posedge clk) begin: calc_verlet_x
    
    if(verlet_state)begin
        px <= x; 
        py <= y; 
        x <= 2 * x + px; 
        y <= 2 * y + py + gravity;
    end
end

endmodule


/*
MUX x_mux(
    {reset, verlet_state, fix_constraint_state},
          ,
  verlet_x,
  fix_const_x,
  in_x_ff); 

MUX y_mux(
    {reset, verlet_state, fix_constraint_state},
        ,
    verlet_y,
    fix_const_y,
    in_y_ff
);

*/