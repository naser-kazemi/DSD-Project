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

reg [N-1:0] res;

assign div = res;


always @(a,b) begin
	// both negative or both positive
	if(a[N-1] == b[N-1]) begin						//	Since they have the same sign, absolute magnitude increases
		res[N-2:0] = a[N-2:0] + b[N-2:0];		//		So we just add the two numbers
		res[N-1] = a[N-1];							//		and set the sign appropriately...  Doesn't matter which one we use, 
															//		they both have the same sign
															//	Do the sign last, on the off-chance there was an overflow...  
		end												//		Not doing any error checking on this...
	//	one of them is negative...
	else if(a[N-1] == 0 && b[N-1] == 1) begin		//	subtract a-b
		if( a[N-2:0] > b[N-2:0] ) begin					//	if a is greater than b,
			res[N-2:0] = a[N-2:0] - b[N-2:0];			//		then just subtract b from a
			res[N-1] = 0;										//		and manually set the sign to positive
			end
		else begin												//	if a is less than b,
			res[N-2:0] = b[N-2:0] - a[N-2:0];			//		we'll actually subtract a from b to avoid a 2's complement answer
			if (res[N-2:0] == 0)
				res[N-1] = 0;										//		I don't like negative zero....
			else
				res[N-1] = 1;										//		and manually set the sign to negative
			end
		end
	else begin												//	subtract b-a (a negative, b positive)
		if( a[N-2:0] > b[N-2:0] ) begin					//	if a is greater than b,
			res[N-2:0] = a[N-2:0] - b[N-2:0];			//		we'll actually subtract b from a to avoid a 2's complement answer
			if (res[N-2:0] == 0)
				res[N-1] = 0;										//		I don't like negative zero....
			else
				res[N-1] = 1;										//		and manually set the sign to negative
			end
		else begin												//	if a is less than b,
			res[N-2:0] = b[N-2:0] - a[N-2:0];			//		then just subtract a from b
			res[N-1] = 0;										//		and manually set the sign to positive
			end
		end
	end





assign out = op == 2'b00 ? sum : op == 2'b01 ? sub : op == 2'b10 ? mult : div;


    
endmodule