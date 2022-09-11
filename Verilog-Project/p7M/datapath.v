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
	 input reset,
	 output [31:0] addr,
	 input PrRe,
	 input [31:0] PrRD,
	 input [7:2] HWInt,
	 output [31:2] Praddr,
	 output [3:0] PrBE,
	 output [31:0] PrWD,
	 output PrWe
	 
    );
	 reg [4:0] ra;
	 reg [31:0] handler;
	 
	 initial begin
		ra=31;
		handler=32'h00004180;
	 end
	 assign addr=etom.PCO;
	 assign PrWD=forwardrt_mw.dataout;
	 assign PrWe=etom.memWrite&&(muxerror_m.out==0);
	 assign Praddr=etom.AOO[31:2];
	 //F
	 mux32 handorepc(.src1(handler),.src2(CP.PCout),.op(etom.eret));
	 mux32 pcbackorhe(.src1(pcback.out),.src2(handorepc.out),.op(etom.eret||CP.errored));
	 IM2 im(.clk(clk),.reset(reset),.pc32(pcbackorhe.out),.stall(controllerstall.stallpc));
	 
	 //D
	 dl32 IR_fd(.clk(clk),.reset(reset),.stall(controllerstall.stallpc),.in(im.Instr));
	 dl32 PC_fd(.clk(clk),.reset(reset),.stall(controllerstall.stallpc),.in(im.thisPC));
	 dl32 PC4_fd(.clk(clk),.reset(reset),.stall(controllerstall.stallpc),.in(im.PC4));
	 
	 FtoD ftod(.IR(IR_fd.out),.PC4(PC4_fd.out),.PC(PC_fd.out),.stall(controllerstall.stalld));
	 muxerror muxerror_d(.error1(im.error),.error2(ftod.no));
	 
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
	 delay4 error_de(.clk(clk),.in(muxerror_d.out),.reset(reset),.stall(ftod.stallO));
	 DtoE dtoe(.IR(IR_de.out),.PC(PC_de.out),.PC4(PC4_de.out),.rs(rs_de.out),.rt(rt_de.out),.imm(imm_de.out),.NPC(NPC_de.out),
					.BranchOP(BranchOP_de.out),.stall(controllerstall.stalle),.error(error_de.out));
	 
	 forward3 forwardrs_em(.oridata(dtoe.rsO),.orireg(dtoe.rs5),.tnew_m(etom.tnew),.datam(etom.writedata),.regm(etom.writereg),
	 .tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 forward3 forwardrt_em(.oridata(dtoe.rtO),.orireg(dtoe.rt5),.tnew_m(etom.tnew),.datam(etom.writedata),.regm(etom.writereg),
	 .tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 
	 
	 mux32 pcb(.src1(dtoe.NPCO),.src2(forwardrs_em.dataout),.op(dtoe.jr));
	 mux32 rsorrt(.src1(forwardrs_em.dataout),.src2(forwardrt_em.dataout),.op(dtoe.ALUSrc1));
	 mux32 rtorimm(.src1(forwardrt_em.dataout),.src2(dtoe.immO),.op(dtoe.ALUSrc2));
	 ALU alu(.Src1(rsorrt.out),.Src2(rtorimm.out),.ALUOP(dtoe.ALUOP));
	 mude md(.clk(clk),.reset(reset),.src1(rsorrt.out),.src2(rtorimm.out),.start(dtoe.start),.mudeop(dtoe.mudeop));
	 mux32 mdoralu(.src1(alu.Result),.src2(md.out),.op(dtoe.aomd));
	 muxerror muxerror_e(.error1(dtoe.errorO),.error2(alu.error));
	 
	 mux32 pcback(.src1(ftod.PC4O),.src2(pcb.out),.op(dtoe.PCDout));
	 
	 
	 //M
	 delay32 IR_em(.clk(clk),.in(dtoe.IRO),.reset(reset),.stall(dtoe.stallO));
	 delay32 PC8_em(.clk(clk),.in(dtoe.PC8O),.reset(reset),.stall(dtoe.stallO));
	 delay32 rt_em(.clk(clk),.in(forwardrt_em.dataout),.reset(reset),.stall(dtoe.stallO));
	 delay32 PC_em(.clk(clk),.in(dtoe.PCO),.reset(reset),.stall(dtoe.stallO));
	 delay32 AO_em(.clk(clk),.in(mdoralu.out),.reset(reset),.stall(dtoe.stallO));
	 delay1 BranchOP_em(.clk(clk),.in(dtoe.BranchOPO),.reset(reset),.stall(dtoe.stallO));
	 delay4 error_em(.clk(clk),.in(muxerror_e.out),.reset(reset),.stall(dtoe.stallO));
	 
	 EtoM etom(.IR(IR_em.out),.BranchOP(BranchOP_em.out),.PC8(PC8_em.out),.rt(rt_em.out),.AO(AO_em.out),.PC(PC_em.out),.error(error_em.out),.stall(controllerstall.stallm));
	 
	 forward2 forwardrt_mw(.oridata(etom.rtO),.orireg(etom.rt5),.tnew_w(mtow.tnew),.dataw(mtow.writedata),.regw(mtow.writereg));
	 BE be(.instr(etom.IRO),.addr(etom.AOO),.hbw(etom.hbw));
	 muxerror muxerror_m(.error1(etom.errorO),.error2(be.error));
	 
	 DM dm(.clk(clk),.reset(reset),.memWrite(etom.memWrite),.memData(forwardrt_mw.dataout),.memAddr(etom.AOO),.pc(etom.PCO),.BE(be.out));
	 drext dext(.DR(dm.dataOut),.BE(be.out),.dmExt(etom.dmExt));
	
	 dmtobridge dbridge(.addr(etom.AOO),.instr(etom.IRO),.error(muxerror_m.out));
	 CP0 CP(.clk(clk),.reset(reset),.A1(etom.rd5),.A2(etom.rd5),.WE(etom.mtc),.bd(bd.bdout),.Din(forwardrt_mw.dataout),
			.PC_f(im.thisPC),.PC_d(ftod.PCO),.PC_e(dtoe.PCO),.PC_m(etom.PCO),.PC_w(bd.PC_wout),.HWInt(HWInt),.error(muxerror_m.out),.clear(etom.eret));
	 mux32 tiorcp(.src1(PrRD),.src2(CP.out),.op(etom.mfc));
	 mux32 dmorticp(.src1(dext.DRout),.src2(tiorcp.out),.op(etom.mfc||PrRe));
	 
	 
	 
	 //W
	 delay32 IR_mw(.clk(clk),.in(etom.IRO),.reset(reset),.stall(etom.stallO));
	 delay32 PC8_mw(.clk(clk),.in(etom.PC8O),.reset(reset),.stall(etom.stallO));
	 delay32 AO_mw(.clk(clk),.in(etom.AOO),.reset(reset),.stall(etom.stallO));
	 delay32 PC_mw(.clk(clk),.in(etom.PCO),.reset(reset),.stall(etom.stallO));
	 delay32 DR_mw(.clk(clk),.in(dmorticp.out),.reset(reset),.stall(etom.stallO));
	 delay1 BranchOP_mw(.clk(clk),.in(etom.BranchOPO),.reset(reset),.stall(etom.stallO));
	 
	 MtoW mtow(.IR(IR_mw.out),.BranchOP(BranchOP_mw.out),.PC8(PC8_mw.out),.AO(AO_mw.out),.DR(DR_mw.out),.PC(PC_mw.out),.stall(controllerstall.stallw));
	 mux5 rtorrd(.src1(mtow.rd),.src2(mtow.rt),.op(mtow.regDst));
	 mux5 rtdor31(.src1(rtorrd.out),.src2(ra),.op(mtow.reg31));
	 mux32 aoordr(.src1(mtow.AOO),.src2(mtow.DRO),.op(mtow.regIn));
	 mux32 adrorpc8(.src1(aoordr.out),.src2(mtow.PC8O),.op(mtow.jl));
	 
	 BD bd(.PC_w(mtow.PCO),.reset(reset),.bd(mtow.branch||mtow.j));
    
	 controller controllerstall(.md(ftod.md),.start(dtoe.start),.busy(md.busy),.tiao(dtoe.PCDout),.tuse(ftod.tuse),.needreg1(ftod.needreg1),.needreg2(ftod.needreg2),
	 .tnew_E(dtoe.tnew),.writereg_E(dtoe.writereg),.tnew_M(etom.tnew),.writereg_M(etom.writereg),.tnew_W(mtow.tnew),.writereg_W(mtow.writereg),.errored(CP.errored||etom.eret));
	 
	 
		
		

endmodule
