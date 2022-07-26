`include "FixedPointALU.v"

module Node #(
    parameter node_id = 1
) (
    input wire clk,
    input wire reset,
    input wire verlet_state, 
    input wire fix_constraint_state, 
    input wire[31:0] x_fix_constraint, 
    input wire[31:0] y_fix_constraint,
    output wire[31:0] x_pos,
    output wire[31:0] y_pos
);

real gravity = 0.3; 

wire verlet_x, verlet_y, fix_const_x, fix_const_y;
wire in_x_ff, in_y_ff;


reg[31:0] x; reg [31:0] y; reg [31:0] px; reg [31:0] py;
assign x_pos = x;
assign y_pos = y;

integer base_x = 200;   
integer dist = 10;

reg[31:0] fix_2 = 32'h00200000; // fix this
reg[1:0] operation_1 = 2;
reg[1:0] operation_2 = 1; 
wire[31:0] x_mult_2_out; 
wire[31:0] next_x;
FixedPointALU x_mult_2(x,fix_2, operation_1,x_mult_2_out );
FixedPointALU twoX_sub_px(x_mult_2_out, py,operation_2, next_x );


always @(posedge clk) begin: calc_verlet_x
    if (reset) begin
        x <= base_x;
        px <= base_x; 
        y <= dist * node_id;
        py <= dist * node_id;
    end else if(verlet_state)begin
        px <= x; 
        py <= y;
        x <= next_x;
        y <= 2 * y - py + gravity;
    end else if(fix_constraint_state)begin
        x <= x_fix_constraint;
        y <= y_fix_constraint;
    end else begin
        x <= x; 
        y <= y;
    end
 
end

endmodule

/*
    // grab sign bit 
    function set_sign;
    input [31:0] data;
    begin
        set_sign = data[31];
    end
    endfunction

    // set the exponent value 
    function [7:0] set_msb_index;
    input [31:0] data;
    reg   [31:0] result; 
    integer i;
    begin
        result = -1;
        
        if(data[31] == 0) begin 
            // find the most significant 1 bit after the sign
            for(i = `REG_WIDTH; i >= 0 && result == -1; i--) begin
                if(data[i] == 1)
                    result = i;
            end
        end

        else if(data[31] == 1) begin
            // find the most significant 1 bit after the sign
            for(i = 0; i <= `REG_WIDTH && result == -1; i++) begin
                if(data[i] == 1)
                    result = i;
            end

        end

        if(result == -1) begin 
            result = 0; 
        end 
        
        set_msb_index = result; 
    end
    endfunction

    // convert rhs argument to fractional binary value 
    function [31:0] convert_rhs; 
    input [31:0] data;
    reg   [31:0] result; 
    integer i; 
    integer max; 
    begin

        max = 0;

        // find base 10 that is larger than our rhs 
        for(i = 1; i < `MAX_DEC_LENGTH && max == 0; i++) begin
            if((10 ** i) > data)
                max = 10 ** i;
        end

        result = 32'b0;

        // use the multiple + push technique to generate a binary fractal number
        for(i = 0; i <= `REG_WIDTH; i++) begin

            // multiply the decimal num by 2 
            data = data * 2;

            // shift our binary fraction left each time
            result = result << 1;

            // if dec result was > than e.g. 100, we push a 1
            if(data >= max) begin
                data = data - max;
                result = result | 1'b1;
            end

            // else we push a 0 
            else begin
                result = result | 1'b0; 
            end

        end
        convert_rhs = result; 
    end
    endfunction


    task convert;
    // main program variables
    input [31:0] lhs; // Left had side of the decimal number.
    input [31:0] rhs; // Right hand side of the decimal number.
    reg [31:0] res; // Resulting IEEE 754 value

    integer rhs_decimal; 
    integer left_msb_index;
    integer right_msb_index;
    integer lhs_mask; 
    integer rhs_mask;
    integer sign; 
    integer i;
    begin
        
        rhs_decimal = rhs;

        lhs_mask = 0;
        rhs_mask = 0; 
        sign = 0;

        if(lhs[31] == 1) begin 
            lhs = ~(lhs - 1);
            sign = 1'b1;
        end

        // find most sigificant 1-bit on lhs
        left_msb_index = set_msb_index(lhs);

        // convert rhs to binary fraction
        // find most significant 1-bit on rhs  
        rhs = convert_rhs(rhs);

        right_msb_index = set_msb_index(rhs);

        if(lhs != 0) begin 

            // set mask for lhs 
            for(i = 0; i < left_msb_index; i++)
                lhs_mask[i] = 1'b1;
    
            res[22:0] = (lhs & lhs_mask) << ((`MANTISSA_MSB - left_msb_index) + 1);
            res[22:0] = res[22:0] | (rhs >> (left_msb_index + 9));

            // set the last bit to 1 to round up 
            if(right_msb_index > `MANTISSA_MSB) begin 
                for(i = right_msb_index - `MANTISSA_MSB; i >= 0; i--)
                    if(rhs[i] == 1)
                        res[0] = 1;
            end 

            if(sign == 0)
                sign = set_sign(lhs);
            res[31] = sign;

            // exponent
            res[30:23] = 127 + left_msb_index;
            
        end

    end
    endtask
    */