module FixedPointALU # (
    parameter Q = 20,
    parameter N = 32
)
(
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

assign a_2cmp = {a[N-1],{(N-1){1'b1}} - a[N-2:0]+ 1'b1};  //2's complement of a
assign b_2cmp = {b[N-1],{(N-1){1'b1}} - b[N-2:0]+ 1'b1};  //2's complement of b

assign multiplicand = (a[N-1]) ? a_2cmp : a;              
assign multiplier   = (b[N-1]) ? b_2cmp : b;

assign mult[N-1] = a[N-1]^b[N-1];                      //Sign bit of output would be XOR or input sign bits
assign f_result = multiplicand[N-2:0] * multiplier[N-2:0]; //We remove the sign bit for multiplication
assign quantized_result = f_result[N-2+Q:Q];               //Quantization of output to required number of bits
assign quantized_result_2cmp = {(N-1){1'b1}} - quantized_result[N-2:0] + 1'b1;  //2's complement of quantized_result
assign mult[N-2:0] = (mult[N-1]) ? quantized_result_2cmp : quantized_result; //If the result is negative, we return a 2's complement representation 
                                                         //of the output value
assign overflow = (f_result[2*N-2:N-1+Q] > 0) ? 1'b1 : 1'b0;



// division





assign out = op == 2'b00 ? sum : op == 2'b01 ? sub : op == 2'b10 ? mult : div;


    
endmodule