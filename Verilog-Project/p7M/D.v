`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:19 11/17/2019 
// Design Name: 
// Module Name:    D 
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
module FtoD(
	 
	 input stall,
	 input [31:0] IR,
	 input [31:0] PC4,
	 input [31:0] PC,
	 input [3:0] error,
	 output stallO,
	 
	 
	 
	 output [3:0] errorO,
	 output [31:0] PCO,
	 output [31:0] PC4O,
	 output [31:0] IRO,
	 output [4:0] rs5,
	 output [4:0] rt5,
	 output [3:0] tuse,
	 output [4:0] needreg1,
	 output [4:0] needreg2,
	 
	 output regDst,
	 output	reg31,
	 output siExt,
	 output shift2,
	 output regWrite,
	 output ALUSrc1,
	 output ALUSrc2,
	 output	regIn,
	 output	memWrite,
	 output	branch,
	 output	[4:0] ALUOP,
	 output	j,
	 output	jr,
	 output jl,
	 output md,
	 output [3:0] no,
	 output eret
    );
	 reg zero;
	 initial begin
		zero=0;
	 end
	 
	 assign stallO=stall;
	 assign PCO = PC;
	assign PC4O = PC4;
	assign IRO = IR;
	assign rs5 = IR[25:21];
	assign rt5 = IR[20:16];
	assign errorO = error;
	
	
	 Tuse ttuse(.instr(IR),.tuse(tuse),.needreg1(needreg1),.needreg2(needreg2));
	 
	 ctrl ctrlD(.instr(IR),.tiao(zero),.stall(zero),.regDst(regDst),.reg31(reg31),.siExt(siExt),.shift2(shift2),.regWrite(regWrite),.ALUSrc1(ALUSrc1),
					.ALUSrc2(ALUSrc2),.regIn(regIn),.memWrite(memWrite),.branch(branch),.ALUOP(ALUOP),.j(j),.jr(jr),.jl(jl),.md(md),.no(no),.eret(eret));
	 
	 
	 
	 
endmodule
