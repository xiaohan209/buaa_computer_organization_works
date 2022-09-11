`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:37 11/18/2019 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	 input clk,
	 input reset
	 
    );
	 reg [4:0] ra;
	 initial begin
		ra=31;
	 end
	 //F
	 IM2 im(.clk(clk),.reset(reset),.pc32(pcback.out),.stall(controllerstall.stallpc));
	 
	 //D
	 
	 FtoD ftod(.IR(im.Instr),.PC4(im.PC4),.PC(im.thisPC),.stall(controllerstall.stalld));
	 
	 
	 extend extendimm(.instr(ftod.IRO),.siExt(ftod.siExt),.shift2(ftod.shift2));
	 extend16forpc extend16(.instr(ftod.IRO),.pc(ftod.PCO));
	 extend26forpc extend26(.instr(ftod.IRO),.pc(ftod.PCO));
	 mux32 mux16or26(.src1(extend16.imm),.src2(extend26.imm),.op(ftod.j));
	 GRF grf(.A1(ftod.rs5),.A2(ftod.rt5),.clk(clk),.reset(reset),.regWrite(mtow.regWrite),.A3(rtdor31.out),.wpc(mtow.PCO),.WD(adrorpc8.out));
    
	 forward4 forwardrs_de(.oridata(grf.RD1),.orireg(ftod.rs5),.tnew_e(dtoe.tnew),.datae(dtoe.writedata),.rege(dtoe.writereg),
	 .tnew_m(etom.tnew),.datam(etom.writedata),.regm(etom.writereg),
	 .tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 
    forward4 forwardrt_de(.oridata(grf.RD2),.orireg(ftod.rt5),.tnew_e(dtoe.tnew),.datae(dtoe.writedata),.rege(dtoe.writereg),
	 .tnew_m(etom.tnew),.datam(etom.writedata),.regm(etom.writereg),
	 .tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
    
	 comparator comp(.A1(forwardrs_de.dataout),.A2(forwardrt_de.dataout),.OP(ftod.ALUOP));
	 
	 //E
	 delay32 IR_de(.clk(clk),.in(ftod.IRO),.reset(reset),.stall(ftod.stallO));
	 delay32 PC_de(.clk(clk),.in(ftod.PCO),.reset(reset),.stall(ftod.stallO));
	 delay32 PC4_de(.clk(clk),.in(ftod.PC4O),.reset(reset),.stall(ftod.stallO));
	 delay32 imm_de(.clk(clk),.in(extendimm.imm),.reset(reset),.stall(ftod.stallO));
	 delay32 NPC_de(.clk(clk),.in(mux16or26.out),.reset(reset),.stall(ftod.stallO));
	 delay1 BranchOP_de(.clk(clk),.in(comp.branch),.reset(reset),.stall(ftod.stallO));
	 delay32 rs_de(.clk(clk),.in(forwardrs_de.dataout),.reset(reset),.stall(ftod.stallO));
	 delay32 rt_de(.clk(clk),.in(forwardrt_de.dataout),.reset(reset),.stall(ftod.stallO));
	 DtoE dtoe(.IR(IR_de.out),.PC(PC_de.out),.PC4(PC4_de.out),.rs(rs_de.out),.rt(rt_de.out),.imm(imm_de.out),.NPC(NPC_de.out),
					.BranchOP(BranchOP_de.out),.stall(controllerstall.stalle));
	 
	 forward3 forwardrs_em(.oridata(dtoe.rsO),.orireg(dtoe.rs5),.tnew_m(etom.tnew),.datam(etom.writedata),.regm(etom.writereg),
	 .tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 forward3 forwardrt_em(.oridata(dtoe.rtO),.orireg(dtoe.rt5),.tnew_m(etom.tnew),.datam(etom.writedata),.regm(etom.writereg),
	 .tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 
	 mux32 pcb(.src1(dtoe.NPCO),.src2(forwardrs_em.dataout),.op(dtoe.jr));
	 
	 mux32 rsorrt(.src1(forwardrs_em.dataout),.src2(forwardrt_em.dataout),.op(dtoe.ALUSrc1));
	 mux32 rtorimm(.src1(forwardrt_em.dataout),.src2(dtoe.immO),.op(dtoe.ALUSrc2));
	 ALU alu(.Src1(rsorrt.out),.Src2(rtorimm.out),.ALUOP(dtoe.ALUOP));
	 
	 mux32 pcback(.src1(ftod.PC4O),.src2(pcb.out),.op(dtoe.PCDout));
	 
	 
	 //M
	 delay32 IR_em(.clk(clk),.in(dtoe.IRO),.reset(reset),.stall(dtoe.stallO));
	 delay32 PC8_em(.clk(clk),.in(dtoe.PC8O),.reset(reset),.stall(dtoe.stallO));
	 delay32 rt_em(.clk(clk),.in(forwardrt_em.dataout),.reset(reset),.stall(dtoe.stallO));
	 delay32 PC_em(.clk(clk),.in(dtoe.PCO),.reset(reset),.stall(dtoe.stallO));
	 delay32 AO_em(.clk(clk),.in(alu.Result),.reset(reset),.stall(dtoe.stallO));
	 delay1 BranchOP_em(.clk(clk),.in(dtoe.BranchOPO),.reset(reset),.stall(dtoe.stallO));
	 
	 EtoM etom(.IR(IR_em.out),.BranchOP(BranchOP_em.out),.PC8(PC8_em.out),.rt(rt_em.out),.AO(AO_em.out),.PC(PC_em.out),.stall(controllerstall.stallm));
	 
	 forward2 forwardrt_mw(.oridata(etom.rtO),.orireg(etom.rt5),.tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 
	 DM dm(.clk(clk),.reset(reset),.memWrite(etom.memWrite),.memData(forwardrt_mw.dataout),.memAddr(etom.AOO),.pc(etom.PCO));
	 
	 
	 
	 //W
	 delay32 IR_mw(.clk(clk),.in(etom.IRO),.reset(reset),.stall(etom.stallO));
	 delay32 PC8_mw(.clk(clk),.in(etom.PC8O),.reset(reset),.stall(etom.stallO));
	 delay32 AO_mw(.clk(clk),.in(etom.AOO),.reset(reset),.stall(etom.stallO));
	 delay32 PC_mw(.clk(clk),.in(etom.PCO),.reset(reset),.stall(etom.stallO));
	 delay32 DR_mw(.clk(clk),.in(dm.dataOut),.reset(reset),.stall(etom.stallO));
	 delay1 BranchOP_mw(.clk(clk),.in(etom.BranchOPO),.reset(reset),.stall(etom.stallO));
	 
	 MtoW mtow(.IR(IR_mw.out),.BranchOP(BranchOP_mw.out),.PC8(PC8_mw.out),.AO(AO_mw.out),.DR(DR_mw.out),.PC(PC_mw.out),.stall(controllerstall.stallw));
	 mux5 rtorrd(.src1(mtow.rd),.src2(mtow.rt),.op(mtow.regDst));
	 mux5 rtdor31(.src1(rtorrd.out),.src2(ra),.op(mtow.jl));
	 mux32 aoordr(.src1(mtow.AOO),.src2(mtow.DRO),.op(mtow.regIn));
	 mux32 adrorpc8(.src1(aoordr.out),.src2(mtow.PC8O),.op(mtow.jl));
	 
	 
    
	 controller controllerstall(.tuse(ftod.tuse),.needreg1(ftod.needreg1),.needreg2(ftod.needreg2),
	 .tnew_E(dtoe.tnew),.writereg_E(dtoe.writereg),.tnew_M(etom.tnew),.writereg_M(etom.writereg),.tnew_W(mtow.tnew),.writereg_W(mtow.writereg));
	 
	 
		
		

endmodule
