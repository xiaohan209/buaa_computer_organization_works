`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:51 09/28/2019 
// Design Name: 
// Module Name:    hhh 
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
module hhh(clk,q,cout);
	input clk;
	output reg[2:0] q;
	output reg cout;
	
	parameter st0=3'b010,st1='b011,st2='b111,st3='b110,st4='b100,st5='b000;
	always@(posedge clk)begin
		case (q)
		st0 : begin
			q<=st1;
			cout<=0;
			end
		st1 : begin
			q<=st2;
			cout<=0;
			end
		st2 :begin
			q<=st3;
			cout<=0;
			end
		st3 : begin
			q<=st4;
			cout<=0;
			end
		st4 : begin
			q<=st5;
			cout<=0;
			end
		st5 : begin
			q<=st0;
			cout<=1;
			end
		default : begin
			q<=st0;
			cout<=0;
			end
	endcase
	end
endmodule


