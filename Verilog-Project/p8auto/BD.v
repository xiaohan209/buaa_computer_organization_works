`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:50:00 12/17/2019 
// Design Name: 
// Module Name:    BD 
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
module BD(
    input [31:0] PC_w,
    input bd,
	 input reset,
    output reg bdout,
	 output reg [31:0] PC_wout
    );
	always @(*)begin
		if(reset)begin
			bdout<=0;
			PC_wout<=0;
		end
		else begin
			if(PC_w!=0)begin
				PC_wout<=PC_w;
				bdout<=bd;
			end
		end
	end

endmodule
