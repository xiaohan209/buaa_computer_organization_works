`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:56 11/17/2019 
// Design Name: 
// Module Name:    E 
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
module DtoE(
	 
	 input stall,
	 input [3:0] error,
	 input [31:0] IR,
	 input [31:0] PC,
	 input [31:0] PC4,
	 input [31:0] rs,
	 input [31:0] rt,
	 input [31:0] imm,
	 input [31:0] NPC,
	 input BranchOP,
	 output stallO,
	
	 output [3:0] tnew,
	 output [4:0] writereg,
	 output [31:0] writedata,
	 
	 output reg BranchOPO,
	 output reg PCDout,
	 //output reg [31:0] PCout,
	 output reg [3:0] errorO,
	 output reg [31:0] immO,
	 output reg [31:0] IRO,
	 output reg [31:0] PC8O,
	 output reg [31:0] PCO,
	 output reg [31:0] rtO,
	 output reg [31:0] rsO,
	 output reg [31:0] NPCO,
	 output reg [4:0] rs5,
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
	 output	[4:0] ALUOP,
	 output	j,
	 output	jr,
	 output jl,
	 output aomd,
	 output start,
	 output md,
	 output [2:0] mudeop
    );
	 reg zero;
	 initial begin
		zero=0;
	 end
	 TnewE tnewe(.instr(IR),.PC8(PC8O),.tnew(tnew),.writereg(writereg),.writedata(writedata));
	 
	 assign stallO=stall;
	 
	 
	 wire jrr;
	 wire br;
	 wire jj;
		assign jrr=jr;
		assign br=branch;
		assign jj=j;
	
	 ctrl ctrlE(.instr(IR),.tiao(BranchOP),.stall(stall),.regDst(regDst),.reg31(reg31),.siExt(siExt),.shift2(shift2),.regWrite(regWrite),.ALUSrc1(ALUSrc1),
		.ALUSrc2(ALUSrc2),.regIn(regIn),.memWrite(memWrite),.branch(branch),.ALUOP(ALUOP),.j(j),.jr(jr),.jl(jl),.aomd(aomd),.start(start),.md(md),.mudeop(mudeop));
	 
	 always @(*)begin
		
			IRO <= IR;
			rsO <= rs;
			rtO <= rt;
			PC8O <= PC4+4;
			//PCout <= jrr?rs:NPC;
			NPCO <= NPC;
			PCDout <= jj||(br&&BranchOP);
			immO <= imm;
			PCO <= PC;
			rs5 <= IR[25:21];
			rt5 <= IR[20:16];
			BranchOPO <= BranchOP;
			errorO <= error;
	 end
	 
	 
	 
	 
	 
	 


endmodule
