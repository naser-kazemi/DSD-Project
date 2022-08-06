`include "enforce_constraint_unit.v"

module enforce_constraint_tb;


reg [31:0] up_x_pos, up_y_pos, x_pos, y_pos, down_x_pos, down_y_pos;
wire [31:0] x_enforced_constraints;
wire [31:0] y_enforced_constraints;
reg is_last ;


enforce_constraint_unit ec(up_x_pos, up_y_pos, x_pos, y_pos, down_x_pos, down_y_pos, 1'b0,
                x_enforced_constraints, y_enforced_constraints);


initial begin
    is_last = 0;

    up_x_pos = 32'h000c9b36;
    up_y_pos = 32'h000aae67;

    x_pos = 32'h000c9b36;
    y_pos = 32'h000b4e67;

    down_x_pos = 32'h000c9b36; 
    down_y_pos = 32'h000c3e67;


    #50

    $display("x_enforced_constraints = %h \t y_enforced_constraints = %h",
        x_enforced_constraints, y_enforced_constraints);

    
end




endmodule
