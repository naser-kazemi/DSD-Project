module integer_to_fp(
    input wire[31:0] float_num, 
    output wire[31:0] fix_point_num
); 

assign fix_point_num = float_num << 12;


endmodule