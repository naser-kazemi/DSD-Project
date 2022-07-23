module node(
    input clk,
    input in_x, 
    input in_y,
    output out_x,
    output out_y
);
    reg x, px, y, py;
    assign out_x = x;
    assign out_y = y;

    always @(posedge clk) begin: verlet_integration
        
    end

endmodule