`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:29 09/18/2019 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(
    input [31:0] A1,
    input [31:0] B1,
    input [31:0] A2,
    input [31:0] B2,
    input clk,
    output reg [31:0] C=0
    );
	 reg [31:0] cnm1;
	 reg [31:0] cnm2;
	 initial
	 begin
	 C=0;
	 cnm1=0;
	 cnm2=0;
	 end
always @(posedge clk)
begin
	cnm1<=A1*B1;
	cnm2<=A2*B2;
	C<=cnm1+cnm2;
end

endmodule
