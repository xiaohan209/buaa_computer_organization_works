`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:05 11/19/2019 
// Design Name: 
// Module Name:    usenew 
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
`define ZERO 6'b000000
`define ADD 6'b100000
`define ADDU 6'b100001
`define SUB 6'b100010
`define SUBU 6'b100011
`define SLL 6'b000000
`define SLLV 6'b000100
`define SRL 6'b000010
`define SRLV 6'b000110
`define SRA 6'b000011
`define SRAV 6'b000111
`define AND 6'b100100
`define OR 6'b100101
`define XOR 6'b100110
`define NOR 6'b100111
`define SLT 6'b101010
`define SLTU 6'b101011
`define ADDI 6'b001000
`define ADDIU 6'b001001
`define ANDI 6'b001100
`define ORI 6'b001101
`define XORI 6'b001110
`define LUI 6'b001111
`define SLTI 6'b001010
`define SLTIU 6'b001011
`define J 6'b000010
`define JAL 6'b000011
`define JR 6'b001000
`define JALR 6'b001001
`define BEQ 6'b000100
`define BNE 6'b000101
`define BLEZ 6'b000110
`define BGTZ 6'b000111
`define BLTZ 6'b000001
`define BGEZ 6'b000001
`define LB 6'b100000
`define LBU 6'b100100
`define LH 6'b100001
`define LHU 6'b100101
`define LW 6'b100011
`define SB 6'b101000
`define SH 6'b101001
`define SW 6'b101011
`define MULT 6'b011000
`define MULTU 6'b011001
`define DIV 6'b011010
`define DIVU 6'b011011
`define MFHI 6'b010000
`define MFLO 6'b010010
`define MTHI 6'b010001
`define MTLO 6'b010011


module Tuse(
    input [31:0] instr,
	 
	 output reg [3:0] tuse,
	 output reg [4:0] needreg1,
	 output reg [4:0] needreg2
    );
	 always @(*)begin
		if(instr[31:26]==`ZERO)begin
			if(instr[5:0]==`ADD)begin //add
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`ADDU)begin //addu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SUB)begin //sub
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SUBU)begin //subu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SLL)begin //sll
				tuse<=1;
				needreg1<=instr[20:16];
				needreg2<=0;
			end
			else if(instr[5:0]==`SLLV)begin //sllv
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SRL)begin //srl
				tuse<=1;
				needreg1<=instr[20:16];
				needreg2<=0;
			end
			else if(instr[5:0]==`SRLV)begin //srlv
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SRA)begin //sra
				tuse<=1;
				needreg1<=instr[20:16];
				needreg2<=0;
			end
			else if(instr[5:0]==`SRAV)begin //srav
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`AND)begin //and
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`OR)begin //or
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`XOR)begin //xor
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`NOR)begin //nor
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SLT)begin //slt
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`SLTU)begin //sltu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`JR)begin  //jr
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
			end
			else if(instr[5:0]==`JALR)begin //jalr
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
			end
			else if(instr[5:0]==`MULT)begin //mult
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`MULTU)begin //multu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`DIV)begin //div
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`DIVU)begin //divu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==`MFHI)begin //mfhi
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
			end
			else if(instr[5:0]==`MFLO)begin //mflo
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
			end
			else if(instr[5:0]==`MTHI)begin //mthi
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
			end
			else if(instr[5:0]==`MTLO)begin //mtlo
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
			end
			else begin  //nop
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
			end
		end
		else if(instr[31:26]==`ADDI)begin //addi
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`ADDIU)begin //addiu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`ANDI)begin //andi
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`ORI)begin //ori
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`XORI)begin //xori
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`LUI)begin //lui
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
		else if(instr[31:26]==`SLTI)begin //slti
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`SLTIU)begin //sltiu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		
		else if(instr[31:26]==`BEQ)begin //beq
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
		end
		else if(instr[31:26]==`BNE)begin //bne
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
		end
		else if(instr[31:26]==`BLEZ)begin //blez
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`BGTZ)begin //bgtz
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`BLTZ&&instr[20:16]==5'b00000)begin //bltz
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`BGEZ&&instr[20:16]==5'b00001)begin //bgez
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`JAL)begin //jal
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
		else if(instr[31:26]==`J)begin //j
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
		
		
		else if(instr[31:26]==`LB)begin //lb
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`LBU)begin //lbu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`LH)begin //lh
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`LHU)begin //lhu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`LW)begin //lw
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`SB)begin //sb
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`SH)begin //sh
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==`SW)begin //sw
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else begin  //nop
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
	 
	 end

endmodule

module TnewE(
    input [31:0] instr,
	 input [31:0] PC8,
	 output reg [3:0] tnew,
	 output reg [4:0] writereg,
	 output reg [31:0] writedata
    );
	 always @(*)begin
		if(instr[31:26]==`ZERO)begin
			if(instr[5:0]==`ADD)begin //add
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`ADDU)begin //addu
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SUB)begin //sub
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SUBU)begin //subu
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SLL)begin //sll
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SLLV)begin //sllv
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SRL)begin //srl
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SRLV)begin //srlv
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SRA)begin //sra
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SRAV)begin //srav
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`AND)begin //and
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`OR)begin //or
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`XOR)begin //xor
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`NOR)begin //nor
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SLT)begin //slt
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`SLTU)begin //sltu
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`JR)begin  //jr
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`JALR)begin //jalr
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=PC8;
			end
			else if(instr[5:0]==`MULT)begin //mult
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MULTU)begin //multu
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`DIV)begin //div
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`DIVU)begin //divu
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MFHI)begin //mfhi
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`MFLO)begin //mflo
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==`MTHI)begin //mthi
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MTLO)begin //mtlo
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
		end
		else if(instr[31:26]==`ADDI)begin //addi
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`ADDIU)begin //addiu
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`ANDI)begin //andi
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`ORI)begin //ori
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`XORI)begin //xori
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LUI)begin //lui
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`SLTI)begin //slti
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`SLTIU)begin //sltiu
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		
		else if(instr[31:26]==`BEQ)begin //beq
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BNE)begin //bne
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BLEZ)begin //blez
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BGTZ)begin //bgtz
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BLTZ&&instr[20:16]==5'b00000)begin //bltz
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BGEZ&&instr[20:16]==5'b00001)begin //bgez
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		
		else if(instr[31:26]==`JAL)begin //jal
				tnew<=0;
				writereg<=31;
				writedata<=PC8;
		end
		else if(instr[31:26]==`J)begin //j
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		
		
		else if(instr[31:26]==`LB)begin //lb
				tnew<=2;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LBU)begin //lbu
				tnew<=2;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LH)begin //lh
				tnew<=2;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LHU)begin //lhu
				tnew<=2;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LW)begin //lw
				tnew<=2;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`SB)begin //sb
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`SH)begin //sh
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`SW)begin //sw
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
	 end 
endmodule

module TnewM(
    input [31:0] instr,
	 input [31:0] AO,
	 input [31:0] PC8,
	 output reg [3:0] tnew,
	 output reg [4:0] writereg,
	 output reg [31:0] writedata
    );
	 always @(*)begin
		if(instr[31:26]==`ZERO)begin
			if(instr[5:0]==`ADD)begin //add
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`ADDU)begin //addu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SUB)begin //sub
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SUBU)begin //subu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLL)begin //sll
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLLV)begin //sllv
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRL)begin //srl
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRLV)begin //srlv
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRA)begin //sra
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRAV)begin //srav
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`AND)begin //and
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`OR)begin //or
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`XOR)begin //xor
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`NOR)begin //nor
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLT)begin //slt
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLTU)begin //sltu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`JR)begin  //jr
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`JALR)begin //jalr
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=PC8;
			end
			else if(instr[5:0]==`MULT)begin //mult
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MULTU)begin //multu
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`DIV)begin //div
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`DIVU)begin //divu
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MFHI)begin //mfhi
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`MFLO)begin //mflo
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`MTHI)begin //mthi
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MTLO)begin //mtlo
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
		end
		else if(instr[31:26]==`ADDI)begin //addi
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`ADDIU)begin //addiu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`ANDI)begin //andi
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`ORI)begin //ori
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`XORI)begin //xori
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`LUI)begin //lui
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`SLTI)begin //slti
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`SLTIU)begin //sltiu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`BEQ)begin //beq
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BNE)begin //bne
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BLEZ)begin //blez
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BGTZ)begin //bgtz
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BLTZ&&instr[20:16]==5'b00000)begin //bltz
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BGEZ&&instr[20:16]==5'b00001)begin //bgez
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`JAL)begin //jal
				tnew<=0;
				writereg<=31;
				writedata<=PC8;
		end
		else if(instr[31:26]==`J)begin //j
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		
		
		else if(instr[31:26]==`LB)begin //lb
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LBU)begin //lbu
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LH)begin //lh
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LHU)begin //lhu
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`LW)begin //lw
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==`SB)begin //sb
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`SH)begin //sh
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`SW)begin //sw
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
	 end
endmodule


module TnewW(
    input [31:0] instr,
	 input [31:0] DR,
	 input [31:0] AO,
	 input [31:0] PC8,
	 output reg [3:0] tnew,
	 output reg [4:0] writereg,
	 output reg [31:0] writedata
    );
	 always @(*)begin
		if(instr[31:26]==`ZERO)begin
			if(instr[5:0]==`ADD)begin //add
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			if(instr[5:0]==`ADDU)begin //addu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			if(instr[5:0]==`SUB)begin //sub
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SUBU)begin //subu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLL)begin //sll
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLLV)begin //sllv
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRL)begin //srl
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRLV)begin //srlv
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRA)begin //sra
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SRAV)begin //srav
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`AND)begin //and
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`OR)begin //or
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`XOR)begin //xor
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`NOR)begin //nor
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLT)begin //slt
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`SLTU)begin //sltu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`JR)begin  //jr
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`JALR)begin //jalr
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=PC8;
			end
			else if(instr[5:0]==`MULT)begin //mult
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MULTU)begin //multu
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`DIV)begin //div
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`DIVU)begin //divu
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MFHI)begin //mfhi
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`MFLO)begin //mflo
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==`MTHI)begin //mthi
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else if(instr[5:0]==`MTLO)begin //mtlo
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
		end
		else if(instr[31:26]==`ADDI)begin //addi
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`ADDIU)begin //addiu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`ORI)begin //ori
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`XORI)begin //xori
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`LUI)begin //lui
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`SLTI)begin //slti
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`SLTIU)begin //sltiu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==`BEQ)begin //beq
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BNE)begin //bne
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BLEZ)begin //blez
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BGTZ)begin //bgtz
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BLTZ&&instr[20:16]==5'b00000)begin //bltz
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`BGEZ&&instr[20:16]==5'b00001)begin //bgez
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`JAL)begin //jal
				tnew<=0;
				writereg<=31;
				writedata<=PC8;
		end
		else if(instr[31:26]==`J)begin //j
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		
		
		else if(instr[31:26]==`LB)begin //lb
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=DR;
		end
		else if(instr[31:26]==`LBU)begin //lbu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=DR;
		end
		else if(instr[31:26]==`LH)begin //lh
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=DR;
		end
		else if(instr[31:26]==`LHU)begin //lhu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=DR;
		end
		else if(instr[31:26]==`LW)begin //lw
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=DR;
		end
		else if(instr[31:26]==`SB)begin //sb
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`SH)begin //sh
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==`SW)begin //sw
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
	 end
endmodule
