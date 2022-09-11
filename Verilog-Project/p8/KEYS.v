`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:06 12/25/2019 
// Design Name: 
// Module Name:    KEYS 
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
module KEYS(
	 input [31:2] Addr,
    output [31:0] Dout,
	 output irq,
	 input [7:0] user_key
    );
	 
	 assign Dout = ({Addr,2'b00}==32'h00007f40)?{24'd0,user_key}:32'd0;
	 assign irq=(&(user_key)==0);
endmodule
