`include "core_control_unit.v"

module core_control_unit_tb;

    parameter width = 32; 
    reg clk = 0;
    reg reset;
    reg is_last = 1;
    wire [width-1:0] verlet_cnt_sig;
    wire [width-1:0] fix_cnst_cnt_sig;
    wire [width-1:0] ram_data_in_address;

    core_control_unit cu(
        .clk(clk),
        .reset(reset),
        .is_last_core(is_last),
        .verlet_cnt_sig(verlet_cnt_sig),
        .fix_cnst_cnt_sig(fix_cnst_cnt_sig),
        .ram_data_in_address(ram_data_in_address)
    );

    always #5 clk = ~clk;

    initial begin
        reset = 1;
        #10
        reset = 0; 
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
        #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
                #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
                #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
           #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
                #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
                #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);

       #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
                #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);
                #10
        $display("**********************");
        $display(" clk_counter : %d \n ram_data_in_address : %d \n verlet_cnt_sig : %b \n fix_cnt_sig : %b", 
        cu.clk_counter,  ram_data_in_address, verlet_cnt_sig, fix_cnst_cnt_sig);


        $finish;


    end
endmodule