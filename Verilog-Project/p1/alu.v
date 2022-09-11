`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:54:50 10/18/2019 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
	 assign C=hh;
	 reg [31:0] hh;
	always @(*)
	begin
	case (ALUOp)
	3'b000: hh=A + B;
	3'b001: hh=A - B;
	3'b010: hh=A & B;
	3'b011: hh=A | B;
	3'b100: hh=A>>B;
	3'b101: hh=$signed($signed(A)>>>B);
	endcase
	end

endmodule
