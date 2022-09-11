`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:34:56 09/16/2019
// Design Name:   adder
// Module Name:   C:/ashdaisdh/adder/adder-ceshi.v
// Project Name:  adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adderceshi;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Clk;
	reg En;

	// Outputs
	wire [3:0] Sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.A(A), 
		.B(B), 
		.Clk(Clk), 
		.En(En), 
		.Sum(Sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Clk = 0;
		En = 1;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here
		#1 A=4'b1;
			B=4'b0;
		#10 A=4'd3;
			 B=4'd2;
		#10 A=4'd4;
		    B=4'd4;
		#10 A=4'd7;
			 B=4'd10;
	end
	
   always #10 Clk=~Clk;
endmodule

