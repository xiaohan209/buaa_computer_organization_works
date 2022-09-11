`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:14:28 09/19/2019
// Design Name:   id_fsm
// Module Name:   C:/ashdaisdh/fsm/aaa.v
// Project Name:  fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
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
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 45;
		clk = 1;
		#1 clk=0;
      #9 char=97;
		#10 char=98;
		#10 char=99;
		#10 char=100;
		#10 char=49;
		#10 char=50;
		#10 char=51;
		#10 char=52;
		#10 char=-3;
		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      always #5 clk=~clk;
endmodule

