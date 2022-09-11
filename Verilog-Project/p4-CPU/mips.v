`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:44:48 11/07/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset,
	 output [31:0] instruct,
	 
	 output [31:0] n,
	 output [31:0] regd,
	 output [31:0] alur,
	 output [31:0] memo,
	 output [31:0] mema,
	 output [31:0] aluone,
	 output [31:0] alutwo,
	 output [4:0] rtt,
	 output [4:0] rss,
	 output [31:0] RDone,
	 output [31:0] RDtwo,
	 output [31:0] bk,
	 output jj,
	 output jrjr
    );
	wire [31:0] instruction;
	wire [31:0] nextinstr;
	wire [31:0] back;
	wire [31:0] jback;
	wire [31:0] imm;
	wire [31:0] RD1;
	wire [31:0] RD2;
	wire [31:0] aluData1;
	wire [31:0] aluData2;
	wire [31:0] aluResult;
	wire [31:0] regData;
	wire [31:0] memData;
	wire [31:0] memAddr;
	wire [31:0] memOut;
	wire [31:0] outTemp;
	wire [31:0] thisInstr;
	
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] rtOrRd;
	wire [4:0] regAddr;
	reg [4:0] ra;
	
	wire [3:0] ALUOP;
	
	wire ifBranch;
	wire branchEnable;
	wire regDst;
	wire reg31;
   wire siExt;
   wire shift2;
   wire regWrite;
   wire ALUSrc1;
   wire ALUSrc2;
   wire regIn;
   wire memWrite;
	wire j;
	wire jr;
	wire jl;
	
	assign rs=instruction[25:21];
	assign rt=instruction[20:16];
	assign rd=instruction[15:11];
	assign memData=RD2;
	assign memAddr=aluResult;
	
	
	assign instruct=instruction;
	assign n=nextinstr;
	assign regd=regData;
	assign alur=aluResult;
	assign memo=memOut;
	assign mema=memAddr;
	assign aluone=aluData1;
	assign alutwo=aluData2;
	assign rtt=rt;
	assign rss=rs;
	assign RDone=RD1;
	assign RDtwo=RD2;
	assign bk=back;
	assign jj=j;
	assign jrjr=jr;
	
	
	IM im(.clk(clk), .reset(reset), .ifBranch(ifBranch), .branchEnable(branchEnable),
			.j(j), .jr(jr), .imm(back), .Instr(instruction), .next(nextinstr) ,.thisInstr(thisInstr));
	extender ext(.instr(instruction),.siExt(siExt),.shift2(shift2),.imm(imm));
	controller crtl(.instr(instruction),.regDst(regDst),.reg31(reg31),.siExt(siExt),.shift2(shift2),
						.regWrite(regWrite), .ALUSrc1(ALUSrc1),.ALUSrc2(ALUSrc2),.regIn(regIn),
						.memWrite(memWrite),.branch(branchEnable),.ALUOP(ALUOP),.j(j),.jr(jr),.jl(jl));
	mux5 muxdt(.src1(rd), .src2(rt), .op(regDst), .out(rtOrRd));
	mux5 muxRegaddr(.src1(rtOrRd),.src2(ra),.op(reg31),.out(regAddr));
	GRF grf(.A1(rs),.A2(rt),.clk(clk),.reset(reset),.regWrite(regWrite),
			  .A3(regAddr),.wpc(thisInstr),.WD(regData),.RD1(RD1),.RD2(RD2));
	mux32 alu1(.src1(RD1),.src2(RD2),.op(ALUSrc1),.out(aluData1));
	mux32 alu2(.src1(RD2),.src2(imm),.op(ALUSrc2),.out(aluData2));
	ALU alu(.Src1(aluData1),.Src2(aluData2),.ALUOP(ALUOP),.Result(aluResult),.Branch(ifBranch));
	DM dm(.clk(clk),.reset(reset),.memWrite(memWrite),.memData(memData),
			.memAddr(memAddr),.pc(thisInstr),.dataOut(memOut));
	mux32 memout(.src1(aluResult),.src2(memOut),.op(regIn),.out(outTemp));
	mux32 regdata(.src1(outTemp),.src2(nextinstr),.op(jl),.out(regData));
	mux32 jimm(.src1(instruction),.src2(aluResult),.op(jr),.out(jback));
	mux32 databack(.src1(imm), .src2(jback), .op(j), .out(back));
	
	initial begin
		ra=31;
	end
endmodule
