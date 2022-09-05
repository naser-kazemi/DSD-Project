module core_control_unit #(
    parameter width = 32,
    parameter number_of_node_in_core = 5
) (
    input wire clk,
    input wire reset,
    input wire is_last_core,
    output reg [width-1:0] verlet_cnt_sig,
    output reg [width-1:0] fix_cnst_cnt_sig,
    output reg [width-1:0] ram_data_in_address,
    output reg [width-1:0] ram_data_in_address_2,
    output wire is_enable
);

reg [width-1:0] clk_counter;
wire [width-1:0] stall_time;

assign stall_time = is_last_core? 1: 0;
assign is_enable = clk_counter >= stall_time;

always @(posedge clk) begin
    if (reset) begin
        fix_cnst_cnt_sig <= 0;
        verlet_cnt_sig <= 1;
        clk_counter <= 0;
        ram_data_in_address <= 0;
        ram_data_in_address_2 <= 0;
    end else begin
        ram_data_in_address <= (clk_counter + 1) % number_of_node_in_core;
        clk_counter <= clk_counter + 1;

        if(verlet_cnt_sig[number_of_node_in_core - 1] == 1)begin: repeat_verlet_cycle
            verlet_cnt_sig <= 1;
        end else begin
            verlet_cnt_sig <= verlet_cnt_sig << 1;
        end

        if(fix_cnst_cnt_sig[number_of_node_in_core - 1] == 1)begin: repeate_fix_cnst_cycle
            fix_cnst_cnt_sig <= 1;
            ram_data_in_address_2 <= 0;
        end else begin
            if (clk_counter == stall_time)begin
                fix_cnst_cnt_sig <= 1;
                ram_data_in_address_2 <= 0;
            end else if (clk_counter > stall_time)begin
                fix_cnst_cnt_sig <= fix_cnst_cnt_sig << 1;
                ram_data_in_address_2 <= ram_data_in_address_2 + 1;
            end else begin
                fix_cnst_cnt_sig <= fix_cnst_cnt_sig;
            end
        end
    end
end


    
endmodule