`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:20:54 11/19/2019 
// Design Name: 
// Module Name:    delay 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module dl32(
	 input clk,
	 input reset,
	 input stall,
	 input [31:0] in,
	 output reg [31:0] out
	 );
	 always @(posedge clk)begin
		if(reset==1)begin
			out<=0;
		end
		else if(stall!=1)begin
			out <= in;
		end
	 end
endmodule


module delay32(
	 input clk,
	 input reset,
	 input stall,
	 input [31:0] in,
	 output reg [31:0] out
	 );
	 always @(posedge clk)begin
		if(reset==1||stall==1)begin
			out<=0;
		end
		else begin
			out <= in;
		end
	 end
endmodule

module delay1(
	 input clk,
	 input reset,
	 input stall,
	 input in,
	 output reg out
	 );
	 always @(posedge clk)begin
		if(reset==1||stall==1)begin
			out<=0;
		end
		else begin
			out <= in;
		end
	 end
endmodule

module delay4(
	 input clk,
	 input reset,
	 input stall,
	 input [3:0] in,
	 output reg [3:0] out
	 );
	 always @(posedge clk)begin
		if(reset==1||stall==1)begin
			out<=0;
		end
		else begin
			out <= in;
		end
	 end
endmodule

