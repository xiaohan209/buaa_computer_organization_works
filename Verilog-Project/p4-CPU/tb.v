`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:56 11/10/2019
// Design Name:   mips
// Module Name:   C:/ashdaisdh/p4-CPU/tb.v
// Project Name:  p4-CPU
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
	wire [31:0] instruct;
	wire [31:0] n;
	wire [31:0] regd;
	wire [31:0] alur;
	wire [31:0] memo;
	wire [31:0] mema;
	wire [31:0] aluone;
	wire [31:0] alutwo;
	wire [4:0] rtt;
	wire [4:0] rss;
	wire [31:0] RDone;
	wire [31:0] RDtwo;
	wire [31:0] bk;
	wire jj;
	wire jrjr;
	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset),
		.instruct(instruct),
		.n(n),
		.regd(regd),
		.alur(alur),
		.memo(memo),
		.mema(mema),
		.aluone(aluone),
		.alutwo(alutwo),
		.rtt(rtt),
		.rss(rss),
		.RDone(RDone),
		.RDtwo(RDtwo),
		.bk(bk),
		.jj(jj),
		.jrjr(jrjr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		;
        
		// Add stimulus here

	end
   always #5 clk=~clk;
endmodule



