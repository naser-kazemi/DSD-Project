module core_control_unit #(
    parameter width = 32,
    parameter number_of_node_in_core = 5
) (
    input wire clk,
    input wire reset,
    output reg [width-1:0] verlet_cnt_sig,
    output reg [width-1:0] ram_data_in_address
);


always @(posedge clk) begin
    if (reset) begin
        verlet_cnt_sig <= 1;
        ram_data_in_address <= 1;
    end else begin
        if(verlet_cnt_sig[number_of_node_in_core - 1] == 1)begin: repeat_cycle
            verlet_cnt_sig <= 1;
            ram_data_in_address <= 1;
        end else begin
            verlet_cnt_sig <= verlet_cnt_sig << 1;
            ram_data_in_address <= ram_data_in_address + number_of_node_in_core;
        end
    end
end


    
endmodule