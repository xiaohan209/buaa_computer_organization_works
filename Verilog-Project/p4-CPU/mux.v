`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:24 11/09/2019 
// Design Name: 
// Module Name:    mux 
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
module mux32(
    input [31:0] src1,
    input [31:0] src2,
    input op,
    output [31:0] out
    );
	 reg [31:0] temp;
	 assign out=temp;
	 always @(*)begin
		if(op)begin
			temp=src2;
		end
		else begin
			temp=src1;
		end
	end

endmodule

module mux5(
	 input [4:0] src1,
    input [4:0] src2,
    input op,
    output [4:0] out
    );
	 reg [4:0] temp;
	 assign out=temp;
	always @(*)begin
		if(op)begin
			temp=src2;
		end
		else begin
			temp=src1;
		end
	end

endmodule
