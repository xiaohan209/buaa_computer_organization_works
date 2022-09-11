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
	 assign out=(op==1)?src2:src1;
	
endmodule

module mux5(
	 input [4:0] src1,
    input [4:0] src2,
    input op,
    output [4:0] out
    );
	 assign out=(op==1)?src2:src1;

endmodule

module muxerror(
	 input [3:0] error1,
    input [3:0] error2,
    
    output [3:0] out
    );
	 assign out=(error1!=0)?error1:error2;
	 
	 
	 
endmodule
