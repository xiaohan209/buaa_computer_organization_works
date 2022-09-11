`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:04:13 09/17/2019
// Design Name:   ccc
// Module Name:   C:/ashdaisdh/ceshi/aaa.v
// Project Name:  ceshi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ccc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module aaa;

	// Inputs
	reg [9:0] addr;

	// Outputs
	wire [31:0] chu;

	// Instantiate the Unit Under Test (UUT)
	ccc uut (
		.addr(addr), 
		.chu(chu)
	);

	initial begin
		// Initialize Inputs
		addr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

