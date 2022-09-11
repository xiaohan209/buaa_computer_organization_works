`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:00:29 09/17/2019 
// Design Name: 
// Module Name:    ccc 
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
module ccc(
input [9:0] addr,
output [31:0] chu
    );
	 reg[31:0] _reg[31:0];
	 wire i;
	 initial
	 begin
	 for(i=0;i<=31;i++)begin
	 _reg[i]<=0;
	 end
	 end
	 

endmodule
