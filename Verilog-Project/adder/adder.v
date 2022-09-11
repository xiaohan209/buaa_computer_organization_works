`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:20 09/16/2019 
// Design Name: 
// Module Name:    adder 
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
module adder(
    input [3:0] A,
    input [3:0] B,
    input Clk,
    input En,
    output [3:0] Sum,
    output Overflow
    );
	 reg [3:0] pgh;
	 reg ww;
	 assign Overflow=ww;
	 assign Sum=pgh;
	 initial 
	 begin
		pgh=4'b0;
		ww=1'b0;
		
	 end
	 always @(posedge Clk)
	 begin
	 if(En==1)
		begin
  		{ww,pgh}=A+B;
		end
	 end


endmodule
