module input_selector #(
    parameter width = 32, 
    parameter node_contains = 5
) (
    input wire [width * 4 * node_contains -1:0] ram_flatted,
    input wire [width-1:0] selector,
    output reg [width-1:0] pre_x_position,
    output reg [width-1:0] pre_y_position,
    output reg [width-1:0] x_position,
    output reg [width-1:0] y_position
);

integer i;
wire [width-1:0] i_wire; 

assign i_wire = i;
always @(*) begin
    for(i = 0; i < node_contains; i = i + 1)begin
        if(selector[i])begin
            x_position = ram_flatted[i*4*width +: 4*width];
            y_position = ram_flatted[(i*4+ 1)*width +: 4*width];
            pre_x_position = ram_flatted[(i*4+ 2)*width +: 4*width];
            pre_y_position = ram_flatted[(i*4+ 3)*width +: 4*width];
        end
    end
end
    
endmodule