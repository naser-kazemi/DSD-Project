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


    reg vx, vy;



    always @(in_x, in_y) begin: get_input
            x = in_x;
            y = in_y;
        end


    
    always @(posedge clk) begin: verlet_integration
        vx <= x - px;
        vy <= y - py;
    end

endmodule