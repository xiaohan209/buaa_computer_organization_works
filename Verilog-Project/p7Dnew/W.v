`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:41:20 11/17/2019 
// Design Name: 
// Module Name:    W 
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
module MtoW(
	 
	 input stall,
	 input [31:0] IR,
	 input [31:0] PC8,
	 input [31:0] DR,
	 input [31:0] AO,
	 input [31:0] PC,
	 input BranchOP,
	 output reg BranchOPO,
	 
	 output stallO,
	 
	 output [3:0] tnew,
	 output [4:0] writereg,
	 output [31:0] writedata,
	 
	 output reg [31:0] PCO,
	 output reg [31:0] PC8O,
	 output reg [31:0] DRO,
	 output reg [31:0] AOO,
	 output reg [4:0] rt,
	 output reg [4:0] rd,
	 
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
	 output jl
    );
	 reg zero;
	 initial begin
		zero=0;
	 end
	 assign stallO=stall;
	 
	 TnewW tneww(.instr(IR),.DR(DR),.AO(AO),.PC8(PC8),.tnew(tnew),.writereg(writereg),.writedata(writedata));
	 
	 
	 
	 ctrl ctrlW(.instr(IR),.tiao(BranchOP),.stall(zero),.regDst(regDst),.reg31(reg31),.siExt(siExt),.shift2(shift2),.regWrite(regWrite),.ALUSrc1(ALUSrc1),
					.ALUSrc2(ALUSrc2),.regIn(regIn),.memWrite(memWrite),.branch(branch),.ALUOP(ALUOP),.j(j),.jr(jr),.jl(jl));
	 always @(*)begin
		 
			PCO <= PC;
			PC8O <= PC8;
			DRO <= DR;
			AOO <= AO;
			rt <= IR[20:16];
			rd <= IR[15:11];
			BranchOPO <= BranchOP;
	 end

endmodule
