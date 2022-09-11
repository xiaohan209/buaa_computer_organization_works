`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:41:04 11/17/2019 
// Design Name: 
// Module Name:    M 
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
module EtoM(
	 
	 input stall,
	 input [31:0] IR,
	 input [31:0] PC8,
	 input [31:0] rt,
	 input [31:0] AO,
	 input [31:0] PC,
	 input BranchOP,
	 
	 output reg BranchOPO,
	 output stallO,
	 
	 
	 output [3:0] tnew,
	 output [4:0] writereg,
	 output [31:0] writedata,
	 
	 output reg [31:0] IRO,
	 output reg [31:0] PC8O,
	 output reg [31:0] rtO,
	 output reg [31:0] AOO,
	 output reg [31:0] PCO,
	 output reg [4:0] rt5,
	 
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
	 output	[3:0] ALUOP,
	 output	j,
	 output	jr,
	 output jl,
	 output [1:0] hbw,
	 output dmExt
    );
	 
	 assign stallO=stall;
	 TnewM tnewm(.instr(IR),.AO(AO),.PC8(PC8),.tnew(tnew),.writereg(writereg),.writedata(writedata));
	 
	 
	 
	 
	  ctrl ctrlM(.instr(IR),.tiao(BranchOP),.regDst(regDst),.reg31(reg31),.siExt(siExt),.shift2(shift2),.regWrite(regWrite),.ALUSrc1(ALUSrc1),
					.ALUSrc2(ALUSrc2),.regIn(regIn),.memWrite(memWrite),.branch(branch),.ALUOP(ALUOP),.j(j),.jr(jr),.jl(jl),.hbw(hbw),.dmExt(dmExt));
	 
	 always @(*)begin
		
			IRO <= IR;
			PC8O <= PC8;
			rtO <= rt;
			AOO <= AO;
			PCO <= PC;
			rt5 <= IR[20:16];
			BranchOPO <= BranchOP;
	 end

endmodule
