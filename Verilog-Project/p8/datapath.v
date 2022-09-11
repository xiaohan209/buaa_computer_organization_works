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
	 input clk2,
	 input reset,
	 input PrRe,
	 input [31:0] PrRD,
	 input [7:2] HWInt,
	 output [31:2] Praddr,
	 output [3:0] PrBE,
	 output [31:0] PrWD,
	 output PrWe,
	 output zhongduan
    );
	 
	 
	 
	 
	 
	 wire ftod_eret;
	 wire [31:0] etom_PCO;
	 wire etom_memWrite;
	 wire [31:0] forwardrt_mw_dataout;
	 
	 wire CP_errored;
	 wire [31:0] CP_PCout;
	 wire [31:0] etom_AOO;
	 wire [31:0] pcback_out;
	 wire [31:0] handorepc_out;
	 wire [31:0] pcbackorhe_out;
	 wire controllerstall_stallpc;
	 wire [31:0] im_Instr;
	 wire [31:0] im_PC4;
	 wire [31:0] im_thisPC;
	 wire controllerstall_stalld;
	 wire controllerstall_stalle;
	 wire [3:0] im_error;
	 wire [3:0] ftod_no;
	 wire [31:0] ftod_IRO;
	 wire ftod_siExt;
	 wire ftod_shift2;
	 wire [31:0] ftod_PCO;
	 wire [31:0] ftod_PC4O;
	 wire [31:0] extend16_imm;
	 wire [31:0] extend26_imm;
	 wire ftod_j;
	 wire [4:0] ftod_rs5;
	 wire [4:0] ftod_rt5;
	 wire mtow_regWrite;
	 wire [4:0] rtdor31_out;
	 wire [31:0] mtow_PCO;
	 wire [31:0] adrorpc8_out;
	 wire [31:0] grf_RD1;
	 wire [31:0] grf_RD2;
	 wire [3:0] dtoe_tnew;
	 wire [31:0] dtoe_writedata;
	 wire [3:0] etom_tnew; 
	 wire [31:0] etom_writedata;
	 wire [4:0] etom_writereg;
	 wire [3:0] mtow_tnew;
	 wire [31:0] mtow_writedata;
	 wire [4:0] mtow_writereg;
	 wire [31:0] forwardrs_de_dataout;
	 wire [31:0] forwardrt_de_dataout;
	 wire [4:0] ftod_ALUOP;
	 wire ftod_stallO;
	 wire [31:0] extendimm_imm;
	 wire [31:0] mux16or26_out;
	 wire comp_branch;
	 wire [31:0] IR_de_out;
	 wire [31:0] PC_de_out;
	 wire [31:0] PC4_de_out;
	 wire [31:0] rs_de_out;
	 wire [31:0] rt_de_out;
	 wire [31:0] imm_de_out;
	 wire [31:0] NPC_de_out;
	 wire BranchOP_de_out;
	 wire [3:0] error_de_out;
	 wire [31:0] dtoe_rsO;
	 wire [4:0] dtoe_rs5;
	 wire [31:0] dtoe_rtO;
	 wire [4:0] dtoe_rt5;
	 wire [31:0] dtoe_NPCO;
	 wire [31:0] forwardrs_em_dataout;
	 wire dtoe_jr;
	 wire [31:0] forwardrt_em_dataout;
	 wire dtoe_ALUSrc1;
	 wire dtoe_ALUSrc2;
	 wire [31:0] dtoe_immO;
	 wire [31:0] rsorrt_out;
	 wire [31:0] rtorimm_out;
	 wire [4:0] dtoe_ALUOP;
	 wire [3:0] dtoe_errorO;
	 wire [3:0] alu_error;
	 wire [31:0] pcb_out;
	 wire dtoe_PCDout;
	 wire [31:0] dtoe_IRO;
	 wire dtoe_stallO;
	 wire [31:0] dtoe_PC8O;
	 wire [31:0] dtoe_PCO;	 
	 wire dtoe_BranchOPO;
	 wire [3:0] muxerror_e_out;
	 wire [31:0] IR_em_out;
	 wire BranchOP_em_out;
	 wire [31:0] PC8_em_out;
	 wire [31:0] rt_em_out;
	 wire [31:0] AO_em_out;
	 wire [31:0] PC_em_out;
	 wire [3:0] error_em_out;
	 wire controllerstall_stallm;
	 wire [31:0] etom_rtO;
	 wire [4:0] etom_rt5;
	 wire [31:0] etom_IRO;
	 wire [1:0] etom_hbw;
	 wire [3:0] etom_errorO;
	 wire [3:0] be_error;
	 wire [3:0] be_out;
	 wire [31:0] dm_dataOut;
	 wire etom_dmExt;
	 wire [3:0] muxerror_m_out;
	 wire [4:0] etom_rd5;
	 wire etom_mtc;
	 wire bd_bdout;
	 wire [31:0] bd_PC_wout;
	 wire etom_eret;
	 wire [31:0] CP_out;
	 wire etom_mfc;
	 wire [31:0] dext_DRout;
	 wire [31:0] tiorcp_out;
	 wire etom_stallO;
	 wire [31:0] etom_PC8O;
	 wire [31:0] dmorticp_out;
	 wire etom_BranchOPO;
	 wire [31:0] IR_mw_out;
	 wire BranchOP_mw_out;
	 wire [31:0] PC8_mw_out;
	 wire [31:0] AO_mw_out;
	 wire [31:0] DR_mw_out;
	 wire [31:0] PC_mw_out;
	 wire controllerstall_stallw;
	 wire [4:0] mtow_rd;
	 wire [4:0] mtow_rt;
	 wire mtow_regDst;
	 wire [4:0] rtorrd_out;
	 wire mtow_reg31;
	 wire [31:0] mtow_AOO;
	 wire [31:0] mtow_DRO;
	 wire mtow_regIn;
	 wire [31:0] aoordr_out;
	 wire [31:0] mtow_PC8O;
	 wire mtow_jl;
	 wire [31:0] alu_out;
	 wire mtow_branch;
	 wire mtow_j;
	 wire [3:0] ftod_tuse;
	 wire [4:0] ftod_needreg1;
	 wire [4:0] ftod_needreg2;
	 
	 wire [4:0] dtoe_writereg;
	 wire [12:2] imb_pc12;
	 wire [3:0] imb_error;
	 wire [3:0] ftod_errorO;
	 wire [3:0] muxerror_d_out;
	 
	 
	 assign PrWD=forwardrt_mw_dataout;
	 assign PrWe=etom_memWrite&&(CP_errored!=1);
	 assign Praddr=etom_AOO[31:2];
	 assign zhongduan=CP_errored;
	 //F
	 mux32 handorepc(.src1(32'h00004180),.src2(CP_PCout),.op(ftod_eret),.out(handorepc_out));
	 mux32 pcbackorhe(.src1(pcback_out),.src2(handorepc_out),.op(ftod_eret||CP_errored),.out(pcbackorhe_out));
	 
	 IM2 im(.clk(clk),.clk2(clk2),.reset(reset),.pc32(pcbackorhe_out),.stall(controllerstall_stallpc),.Instr(im_Instr),.PC4(im_PC4),
				.thisPC(im_thisPC),.error(im_error));
	 

	 //D
	 
	 FtoD ftod(.IR(im_Instr),.PC4(im_PC4),.PC(im_thisPC),.stall(controllerstall_stalld),.eret(ftod_eret),.no(ftod_no),.IRO(ftod_IRO),
				.siExt(ftod_siExt),.shift2(ftod_shift2),.PCO(ftod_PCO),.j(ftod_j),.rs5(ftod_rs5),.rt5(ftod_rt5),.ALUOP(ftod_ALUOP),
				.stallO(ftod_stallO),.PC4O(ftod_PC4O),.tuse(ftod_tuse),.needreg1(ftod_needreg1),.needreg2(ftod_needreg2),.error(im_error),
				.errorO(ftod_errorO));
	 muxerror muxerror_d(.error1(ftod_errorO),.error2(ftod_no),.out(muxerror_d_out));
	 
	 extend extendimm(.instr(ftod_IRO),.siExt(ftod_siExt),.shift2(ftod_shift2),.imm(extendimm_imm));
	 extend16forpc extend16(.instr(ftod_IRO),.pc(ftod_PCO),.imm(extend16_imm));
	 extend26forpc extend26(.instr(ftod_IRO),.pc(ftod_PCO),.imm(extend26_imm));
	 mux32 mux16or26(.src1(extend16_imm),.src2(extend26_imm),.op(ftod_j),.out(mux16or26_out));
	 GRF grf(.A1(ftod_rs5),.A2(ftod_rt5),.clk(clk),.reset(reset),.regWrite(mtow_regWrite),.A3(rtdor31_out),.wpc(mtow_PCO),
			.WD(adrorpc8_out),.RD1(grf_RD1),.RD2(grf_RD2));
    
	 forward4 forwardrs_de(.oridata(grf_RD1),.orireg(ftod_rs5),.tnew_e(dtoe_tnew),.datae(dtoe_writedata),.rege(dtoe_writereg),
	 .tnew_m(etom_tnew),.datam(etom_writedata),.regm(etom_writereg),
	 .tnew_w(mtow_tnew),.dataw(mtow_writedata),.regw(mtow_writereg),.dataout(forwardrs_de_dataout));
	 
    forward4 forwardrt_de(.oridata(grf_RD2),.orireg(ftod_rt5),.tnew_e(dtoe_tnew),.datae(dtoe_writedata),.rege(dtoe_writereg),
	 .tnew_m(etom_tnew),.datam(etom_writedata),.regm(etom_writereg),
	 .tnew_w(mtow_tnew),.dataw(mtow_writedata),.regw(mtow_writereg),.dataout(forwardrt_de_dataout));
    
	 comparator comp(.A1(forwardrs_de_dataout),.A2(forwardrt_de_dataout),.OP(ftod_ALUOP),.branch(comp_branch));
	 
	 //E
	 delay32 IR_de(.clk(clk),.in(ftod_IRO),.reset(reset),.stall(ftod_stallO),.out(IR_de_out));
	 delay32 PC_de(.clk(clk),.in(ftod_PCO),.reset(reset),.stall(ftod_stallO),.out(PC_de_out));
	 delay32 PC4_de(.clk(clk),.in(ftod_PC4O),.reset(reset),.stall(ftod_stallO),.out(PC4_de_out));
	 delay32 imm_de(.clk(clk),.in(extendimm_imm),.reset(reset),.stall(ftod_stallO),.out(imm_de_out));
	 delay32 NPC_de(.clk(clk),.in(mux16or26_out),.reset(reset),.stall(ftod_stallO),.out(NPC_de_out));
	 delay1 BranchOP_de(.clk(clk),.in(comp_branch),.reset(reset),.stall(ftod_stallO),.out(BranchOP_de_out));
	 delay32 rs_de(.clk(clk),.in(forwardrs_de_dataout),.reset(reset),.stall(ftod_stallO),.out(rs_de_out));
	 delay32 rt_de(.clk(clk),.in(forwardrt_de_dataout),.reset(reset),.stall(ftod_stallO),.out(rt_de_out));
	 delay4 error_de(.clk(clk),.in(muxerror_d_out),.reset(reset),.stall(ftod_stallO),.out(error_de_out));
	 DtoE dtoe(.IR(IR_de_out),.PC(PC_de_out),.PC4(PC4_de_out),.rs(rs_de_out),.rt(rt_de_out),.imm(imm_de_out),.NPC(NPC_de_out),
					.BranchOP(BranchOP_de_out),.stall(controllerstall_stalle),.error(error_de_out),.tnew(dtoe_tnew),.writedata(dtoe_writedata),
					.writereg(dtoe_writereg),.rsO(dtoe_rsO),.rs5(dtoe_rs5),.rtO(dtoe_rtO),.rt5(dtoe_rt5),.NPCO(dtoe_NPCO),.jr(dtoe_jr),
					.ALUSrc1(dtoe_ALUSrc1),.ALUSrc2(dtoe_ALUSrc2),.immO(dtoe_immO),.ALUOP(dtoe_ALUOP),.errorO(dtoe_errorO),.PCDout(dtoe_PCDout),
					.stallO(dtoe_stallO),.IRO(dtoe_IRO),.PC8O(dtoe_PC8O),.PCO(dtoe_PCO),.BranchOPO(dtoe_BranchOPO));
	 
	 forward3 forwardrs_em(.oridata(dtoe_rsO),.orireg(dtoe_rs5),.tnew_m(etom_tnew),.datam(etom_writedata),.regm(etom_writereg),
	 .tnew_w(mtow_tnew),.dataw(mtow_writedata),.regw(mtow_writereg),.dataout(forwardrs_em_dataout));
	 forward3 forwardrt_em(.oridata(dtoe_rtO),.orireg(dtoe_rt5),.tnew_m(etom_tnew),.datam(etom_writedata),.regm(etom_writereg),
	 .tnew_w(mtow_tnew),.dataw(mtow_writedata),.regw(mtow_writereg),.dataout(forwardrt_em_dataout));
	 
	 
	 mux32 pcb(.src1(dtoe_NPCO),.src2(forwardrs_em_dataout),.op(dtoe_jr),.out(pcb_out));
	 mux32 rsorrt(.src1(forwardrs_em_dataout),.src2(forwardrt_em_dataout),.op(dtoe_ALUSrc1),.out(rsorrt_out));
	 mux32 rtorimm(.src1(forwardrt_em_dataout),.src2(dtoe_immO),.op(dtoe_ALUSrc2),.out(rtorimm_out));
	 ALU alu(.Src1(rsorrt_out),.Src2(rtorimm_out),.ALUOP(dtoe_ALUOP),.error(alu_error),.Result(alu_out));
	 
	 
	 muxerror muxerror_e(.error1(dtoe_errorO),.error2(alu_error),.out(muxerror_e_out));
	 
	 mux32 pcback(.src1(ftod_PC4O),.src2(pcb_out),.op(dtoe_PCDout),.out(pcback_out));
	 
	 
	 //M
	 delay32 IR_em(.clk(clk),.in(dtoe_IRO),.reset(reset),.stall(dtoe_stallO),.out(IR_em_out));
	 delay32 PC8_em(.clk(clk),.in(dtoe_PC8O),.reset(reset),.stall(dtoe_stallO),.out(PC8_em_out));
	 delay32 rt_em(.clk(clk),.in(forwardrt_em_dataout),.reset(reset),.stall(dtoe_stallO),.out(rt_em_out));
	 delay32 PC_em(.clk(clk),.in(dtoe_PCO),.reset(reset),.stall(dtoe_stallO),.out(PC_em_out));
	 delay32 AO_em(.clk(clk),.in(alu_out),.reset(reset),.stall(dtoe_stallO),.out(AO_em_out));
	 delay1 BranchOP_em(.clk(clk),.in(dtoe_BranchOPO),.reset(reset),.stall(dtoe_stallO),.out(BranchOP_em_out));
	 delay4 error_em(.clk(clk),.in(muxerror_e_out),.reset(reset),.stall(dtoe_stallO),.out(error_em_out));
	 
	 EtoM etom(.IR(IR_em_out),.BranchOP(BranchOP_em_out),.PC8(PC8_em_out),.rt(rt_em_out),.AO(AO_em_out),.PC(PC_em_out),
					.PCO(etom_PCO),.error(error_em_out),.stall(controllerstall_stallm),.memWrite(etom_memWrite),.AOO(etom_AOO),
					.tnew(etom_tnew),.writedata(etom_writedata),.writereg(etom_writereg),.rtO(etom_rtO),.rt5(etom_rt5),.IRO(etom_IRO),
					.hbw(etom_hbw),.errorO(etom_errorO),.dmExt(etom_dmExt),.rd5(etom_rd5),.mtc(etom_mtc),
					.eret(etom_eret),.mfc(etom_mfc),.stallO(etom_stallO),.PC8O(etom_PC8O),.BranchOPO(etom_BranchOPO));
	 
	 forward2 forwardrt_mw(.oridata(etom_rtO),.orireg(etom_rt5),.tnew_w(mtow_tnew),.dataw(mtow_writedata),
									.regw(mtow_writereg),.dataout(forwardrt_mw_dataout));
	 BE be(.instr(etom_IRO),.addr(etom_AOO),.hbw(etom_hbw),.out(be_out),.error(be_error));
	 muxerror muxerror_m(.error1(etom_errorO),.error2(be_error),.out(muxerror_m_out));
	 
	 DM dm(.clk(clk),.clk2(clk2),.reset(reset),.errored(CP_errored),.memWrite(etom_memWrite),.memData(forwardrt_mw_dataout),.memAddr(etom_AOO),
			.pc(etom_PCO),.BE(be_out),.dataOut(dm_dataOut));
	 drext dext(.DR(dm_dataOut),.BE(be_out),.dmExt(etom_dmExt),.DRout(dext_DRout));
	
	 dmtobridge dbridge(.addr(etom_AOO),.instr(etom_IRO),.error(muxerror_m_out));
	 CP0 CP(.clk(clk),.reset(reset),.A1(etom_rd5),.A2(etom_rd5),.WE(etom_mtc),.bd(bd_bdout),.Din(forwardrt_mw_dataout),
			.PC_d(ftod_PCO),.PC_e(dtoe_PCO),.PC_m(etom_PCO),.PC_w(bd_PC_wout),.HWInt(HWInt),.error(muxerror_m_out),
			.errored(CP_errored),.clear(etom_eret),.PCout(CP_PCout),.out(CP_out));
	 mux32 tiorcp(.src1(PrRD),.src2(CP_out),.op(etom_mfc),.out(tiorcp_out));
	 mux32 dmorticp(.src1(dext_DRout),.src2(tiorcp_out),.op(etom_mfc||PrRe),.out(dmorticp_out));
	 
	 
	 
	 //W
	 delay32 IR_mw(.clk(clk),.in(etom_IRO),.reset(reset),.stall(etom_stallO),.out(IR_mw_out));
	 delay32 PC8_mw(.clk(clk),.in(etom_PC8O),.reset(reset),.stall(etom_stallO),.out(PC8_mw_out));
	 delay32 AO_mw(.clk(clk),.in(etom_AOO),.reset(reset),.stall(etom_stallO),.out(AO_mw_out));
	 delay32 PC_mw(.clk(clk),.in(etom_PCO),.reset(reset),.stall(etom_stallO),.out(PC_mw_out));
	 delay32 DR_mw(.clk(clk),.in(dmorticp_out),.reset(reset),.stall(etom_stallO),.out(DR_mw_out));
	 delay1 BranchOP_mw(.clk(clk),.in(etom_BranchOPO),.reset(reset),.stall(etom_stallO),.out(BranchOP_mw_out));
	 
	 MtoW mtow(.IR(IR_mw_out),.BranchOP(BranchOP_mw_out),.PC8(PC8_mw_out),.AO(AO_mw_out),.DR(DR_mw_out),.PC(PC_mw_out),
					.stall(controllerstall_stallw),.regWrite(mtow_regWrite),.PCO(mtow_PCO),.tnew(mtow_tnew),.writedata(mtow_writedata),
					.writereg(mtow_writereg),.rd(mtow_rd),.rt(mtow_rt),.regDst(mtow_regDst),.reg31(mtow_reg31),.AOO(mtow_AOO),
					.DRO(mtow_DRO),.regIn(mtow_regIn),.PC8O(mtow_PC8O),.jl(mtow_jl),.branch(mtow_branch),.j(mtow_j));
	 mux5 rtorrd(.src1(mtow_rd),.src2(mtow_rt),.op(mtow_regDst),.out(rtorrd_out));
	 mux5 rtdor31(.src1(rtorrd_out),.src2(5'b11111),.op(mtow_reg31),.out(rtdor31_out));
	 mux32 aoordr(.src1(mtow_AOO),.src2(mtow_DRO),.op(mtow_regIn),.out(aoordr_out));
	 mux32 adrorpc8(.src1(aoordr_out),.src2(mtow_PC8O),.op(mtow_jl),.out(adrorpc8_out));
	 
	 BD bd(.PC_w(mtow_PCO),.reset(reset),.bd(mtow_branch||mtow_j),.bdout(bd_bdout),.PC_wout(bd_PC_wout));
    
	 controller controllerstall(.tuse(ftod_tuse),.needreg1(ftod_needreg1),.needreg2(ftod_needreg2),
				.tnew_E(dtoe_tnew),.writereg_E(dtoe_writereg),.tnew_M(etom_tnew),.writereg_M(etom_writereg),.tnew_W(mtow_tnew),
				.writereg_W(mtow_writereg),.errored(CP_errored),.stallpc(controllerstall_stallpc),.stalld(controllerstall_stalld),
				.stalle(controllerstall_stalle),.stallm(controllerstall_stallm),.stallw(controllerstall_stallw));
	 
	 
		
		

endmodule
