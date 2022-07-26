module FixedPointALU # (
    parameter Q = 12,
    parameter N = 32
)
(   
    input start,
	input i_clk,
    input wire[N-1:0] a,
    input wire[N-1:0] b,
    input wire [1:0] op,
    output [N-1:0] out
);


wire [31:0] sum, sub, mult, div;


// summation
assign sum = a + b;


// subtraction
assign sub = a - b;



// multiplication
wire [2*N-1:0]	f_result;		//	Multiplication by 2 values of N bits requires a 
                                //	register that is N+N = 2N deep
                                
wire [N-1:0]   multiplicand;
wire [N-1:0]	multiplier;
wire [N-1:0]    a_2cmp, b_2cmp;
wire [N-2:0]    quantized_result,quantized_result_2cmp;

assign a_2cmp = {~a[N-1],~a[N-2:0]+ 1'b1};  //2's complement of a {(N-1){1'b1}} - 
assign b_2cmp = {~b[N-1],~b[N-2:0]+ 1'b1};  //2's complement of b  {(N-1){1'b1}} - 

assign multiplicand = (a[N-1]) ? a_2cmp : a;              
assign multiplier   = (b[N-1]) ? b_2cmp : b;


assign f_result = multiplicand[N-2:0] * multiplier[N-2:0];  //We remove the sign bit for multiplication

assign mult[N-1] = a[N-1]^b[N-1];                     //Sign bit of output would be XOR or input sign bits
assign quantized_result = f_result[N-2+Q:Q];              //Quantization of output to required number of bits
assign quantized_result_2cmp = ~quantized_result[N-2:0] + 1'b1;  //2's complement of quantized_result  {(N-1){1'b1}} - 
assign mult[N-2:0] = mult[N-1] ? quantized_result_2cmp : quantized_result; //If the result is negative, we return a 2's complement representation of the result



// division

reg [2*N+Q-3:0]	reg_working_quotient;	//	Our working copy of the quotient
reg [N-1:0] reg_quotient;				//	Final quotient
reg [N-2+Q:0] reg_working_dividend;	//	Working copy of the dividend
reg [2*N+Q-3:0]	reg_working_divisor;		// Working copy of the divisor

reg [N-1:0] reg_count; 		//	This is obviously a lot bigger than it needs to be, as we only need 
                                                //		count to N-1+Q but, computing that number of bits requires a 
                                                //		logarithm (base 2), and I don't know how to do that in a 
                                                //		way that will work for everyone
                                        
reg reg_done;			//	Computation completed flag
reg	reg_sign;			//	The quotient's sign bit
reg	reg_overflow;		//	Overflow flag

initial reg_done = 1'b1;				//	Initial state is to not be doing anything
initial reg_overflow = 1'b0;			//		And there should be no woverflow present
initial reg_sign = 1'b0;				//		And the sign should be positive

initial reg_working_quotient = 0;	
initial reg_quotient = 0;				
initial reg_working_dividend = 0;	
initial reg_working_divisor = 0;		
initial reg_count = 0; 		


assign div[N-2:0] = reg_quotient[N-2:0];	//	The division results
assign div[N-1] = reg_sign;						//	The sign of the quotient
assign o_complete = reg_done;
assign o_overflow = reg_overflow;

always @( posedge i_clk ) begin
    if(reg_done && start) begin										//	This is our startup condition
        //  Need to check for a divide by zero right here, I think....
        reg_done <= 1'b0;												//	We're not done			
        reg_count <= N+Q-1;											//	Set the count
        reg_working_quotient <= 0;									//	Clear out the quotient register
        reg_working_dividend <= 0;									//	Clear out the dividend register 
        reg_working_divisor <= 0;									//	Clear out the divisor register 
        reg_overflow <= 1'b0;										//	Clear the overflow register

        reg_working_dividend[N+Q-2:Q] <= a[N-2:0];				//	Left-align the dividend in its working register
        reg_working_divisor[2*N+Q-3:N+Q-1] <= b[N-2:0];		//	Left-align the divisor into its working register

        reg_sign <= a[N-1] ^ b[N-1];		//	Set the sign bit
        end 
    else if(!reg_done) begin
        reg_working_divisor <= reg_working_divisor >> 1;	//	Right shift the divisor (that is, divide it by two - aka reduce the divisor)
        reg_count <= reg_count - 1;								//	Decrement the count

        //	If the dividend is greater than the divisor
        if(reg_working_dividend >= reg_working_divisor) begin
            reg_working_quotient[reg_count] <= 1'b1;										//	Set the quotient bit
            reg_working_dividend <= reg_working_dividend - reg_working_divisor;	//		and subtract the divisor from the dividend
            end

        //stop condition
        if(reg_count == 0) begin
            reg_done <= 1'b1;										//	If we're done, it's time to tell the calling process
            reg_quotient <= reg_working_quotient;			//	Move in our working copy to the outside world
            if (reg_working_quotient[2*N+Q-3:N]>0)
                reg_overflow <= 1'b1;
                end
        else
            reg_count <= reg_count - 1;	
        end
    end












assign out = op == 2'b00 ? sum : op == 2'b01 ? sub : op == 2'b10 ? mult : div;


    
endmodule