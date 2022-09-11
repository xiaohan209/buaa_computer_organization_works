`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:03:01 11/19/2019
// Design Name:   mips
// Module Name:   C:/ashdaisdh/p5/tb.v
// Project Name:  p5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;
	// Inputs
	reg clk;
	reg reset;
	reg interrupt;
	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset),
		.interrupt(interrupt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		interrupt = 0;
		
		// Wait 100 ns for global reset to finish
		#10;
		reset=0;
        
		// Add stimulus here
	
	end
	
    always #2 clk=~clk;  
	 
endmodule

