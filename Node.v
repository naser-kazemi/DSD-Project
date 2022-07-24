module node #(
    parameter node_id = 1
) (
    input wire clk,
    input wire reset,
    input wire verlet_state, 
    input wire fix_constraint_state, 
    output wire[7:0] x_pos,
    output wire[7:0] y_pos
);

integer base_x = 200;   
integer gravity = 1;
integer dist = 10;

wire verlet_x, verlet_y, fix_const_x, fix_const_y;
wire in_x_ff, in_y_ff;


reg[7:0] x; reg [7:0] y; reg [7:0] px; reg [7:0] py;
assign x_pos = x;
assign y_pos = y;

always @(posedge clk) begin: calc_verlet_x
    if (reset) begin
        x <= base_x;
        px <= base_x; 
        y <= dist * node_id;
        py <= dist * node_id;
    end else if(verlet_state)begin
        px <= x; 
        py <= y; 
        x <= 2 * x + px; 
        y <= 2 * y + py + gravity;
    end else if(fix_constraint_state)begin

    end else begin
        x <= x; 
        y <= y;
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