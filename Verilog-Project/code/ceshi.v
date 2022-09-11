`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:38:35 09/17/2019
// Design Name:   code
// Module Name:   C:/ashdaisdh/code/ceshi.v
// Project Name:  code
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ceshi;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;
   wire [20:0] ceshi;
	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1),
		.ceshi(ceshi)
	);

	initial begin
		// Initialize Inputs
		
	#5	   Clk=0;
			Reset=1;
			Slt=0;
			En=0;
	  #10 Reset=0;
			Slt=1;
			En=1;

		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here

	end
   always #5 Clk=~Clk;
endmodule

