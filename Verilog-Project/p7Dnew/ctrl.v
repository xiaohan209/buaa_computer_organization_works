`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:16 11/09/2019 
// Design Name: 
// Module Name:    controller 
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
`define COP 6'b010000
`define ERET 6'b011000
`define MFC 5'b00000
`define MTC 5'b00100

module ctrl(
    input [31:0] instr,
	 input tiao,
	 input stall,
    output reg regDst,
	 output reg reg31,
    output reg siExt,
    output reg shift2,
    output reg regWrite,
    output reg ALUSrc1,
    output reg ALUSrc2,
    output reg regIn,
    output reg memWrite,
    output reg branch,
    output reg [4:0] ALUOP,
    output reg j,
    output reg jr,
    output reg jl,
	 output reg [1:0] hbw,
	 output reg dmExt,
	 output reg aomd,
	 output reg start,
	 output reg md,
	 output reg [2:0] mudeop,
	 output reg [3:0] no,
	 output reg eret,
	 output reg mtc,
	 output reg mfc
    );
	always @(*)begin
		if(instr[31:26]==`ZERO)begin
			if(instr[5:0]==`ADD)begin //add
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=15;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0; 
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`ADDU)begin //addu
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;				
			end
			else if(instr[5:0]==`SUB)begin //sub
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=16;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0; 
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SUBU)begin //subu
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=1;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0; 
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SLL)begin //sll
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=1;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=7;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0; 
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SLLV)begin //sllv
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=8;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0; 
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SRL)begin //srl
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=1;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=9;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SRLV)begin //srlv
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=10;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SRA)begin //sra
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=1;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=11;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SRAV)begin //srav
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=12;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`AND)begin //and
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=2;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`OR)begin //or
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=3;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`XOR)begin //xor
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=4;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`NOR)begin //nor
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=6;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SLT)begin //slt
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=13;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`SLTU)begin //sltu
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=14;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`JR)begin  //jr
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=1;
				jr<=1;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`JALR)begin  //jalr
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=1;
				jr<=1;
				jl<=1;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`MULT)begin //mult
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				if(stall==1)begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=7;
				end
				else begin
					aomd<=0;
					start<=1;
					md<=1;
					mudeop<=0;
				end
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`MULTU)begin //multu
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				if(stall==1)begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=7;
				end
				else begin
					aomd<=0;
					start<=1;
					md<=1;
					mudeop<=1;
				end
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`DIV)begin //div
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				if(stall==1)begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=7;
				end
				else begin
					aomd<=0;
					start<=1;
					md<=1;
					mudeop<=2;
				end
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`DIVU)begin //divu
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				if(stall==1)begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=7;
				end
				else begin
					aomd<=0;
					start<=1;
					md<=1;
					mudeop<=3;
				end
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`MFHI)begin //mfhi
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=1;
				start<=0;
				md<=1;
				mudeop<=6;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`MFLO)begin //mflo
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=1;
				start<=0;
				md<=1;
				mudeop<=7;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`MTHI)begin //mthi
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				if(stall==1)begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=7;
				end
				else begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=4;
				end
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[5:0]==`MTLO)begin //mtlo
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				if(stall==1)begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=7;
				end
				else begin
					aomd<=0;
					start<=0;
					md<=1;
					mudeop<=5;
				end
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
			else begin  //error
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=10;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
		end
		else if(instr[31:26]==`ADDI)begin//addi
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=15;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`ADDIU)begin//addiu
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`ANDI)begin//andi
				regDst<=1;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=2;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`ORI)begin //ori
				regDst<=1;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=3;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`XORI)begin //xori
				regDst<=1;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=4;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`LUI)begin //lui
				regDst<=1;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=5;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`SLTI)begin//slti
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=13;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`SLTIU)begin//sltiu
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=14;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		
		
		else if(instr[31:26]==`BEQ)begin //beq
				regDst<=0;
				reg31<=0;
				siExt<=1;
				shift2<=1;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=1;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`BNE)begin//bne
				regDst<=0;
				reg31<=0;
				siExt<=1;
				shift2<=1;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=1;
				ALUOP<=5;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`BLEZ)begin//blez
				regDst<=0;
				reg31<=0;
				siExt<=1;
				shift2<=1;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=1;
				ALUOP<=3;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`BGTZ)begin//bgtz
				regDst<=0;
				reg31<=0;
				siExt<=1;
				shift2<=1;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=1;
				ALUOP<=2;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`BLTZ&&instr[20:16]==5'b00000)begin//bltz
				regDst<=0;
				reg31<=0;
				siExt<=1;
				shift2<=1;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=1;
				ALUOP<=4;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`BGEZ&&instr[20:16]==5'b00001)begin//bgez
				regDst<=0;
				reg31<=0;
				siExt<=1;
				shift2<=1;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=1;
				ALUOP<=1;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`J)begin //j
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=1;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`JAL)begin //jal
				regDst<=0;
				reg31<=1;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=1;
				jr<=0;
				jl<=1;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		
		
		else if(instr[31:26]==`LB)begin //lb
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=1;
				memWrite<=0;
				branch<=0;
				ALUOP<=17;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=2;
				dmExt<=1;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`LBU)begin //lbu
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=1;
				memWrite<=0;
				branch<=0;
				ALUOP<=17;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=2;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`LH)begin //lh
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=1;
				memWrite<=0;
				branch<=0;
				ALUOP<=17;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=1;
				dmExt<=1;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`LHU)begin //lhu
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=1;
				memWrite<=0;
				branch<=0;
				ALUOP<=17;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=1;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`LW)begin //lw
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=1;
				memWrite<=0;
				branch<=0;
				ALUOP<=17;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`SB)begin //sb
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=1;
				branch<=0;
				ALUOP<=18;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=2;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`SH)begin //sh
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=1;
				branch<=0;
				ALUOP<=18;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=1;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`SW)begin //sw
				regDst<=1;
				reg31<=0;
				siExt<=1;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=1;
				regIn<=0;
				memWrite<=1;
				branch<=0;
				ALUOP<=18;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
		else if(instr[31:26]==`COP)begin
			if(instr[5:0]==`ERET)begin//eret
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=1;
				mtc<=0;
				mfc<=0;
			end
			else if(instr[25:21]==`MTC)begin//mtc0
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=1;
				mfc<=0;
			end
			else if(instr[25:21]==`MFC)begin//mfc0
				regDst<=1;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=1;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=1;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=0;
				eret<=0;
				mtc<=0;
				mfc<=1;
			end
			else begin//error
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=10;
				eret<=0;
				mtc<=0;
				mfc<=0;
			end
		end
		else begin  //error
				regDst<=0;
				reg31<=0;
				siExt<=0;
				shift2<=0;
				regWrite<=0;
				ALUSrc1<=0;
				ALUSrc2<=0;
				regIn<=0;
				memWrite<=0;
				branch<=0;
				ALUOP<=0;
				j<=0;
				jr<=0;
				jl<=0;
				hbw<=0;
				dmExt<=0;
				aomd<=0;
				start<=0;
				md<=0;
				mudeop<=0;
				no<=10;
				eret<=0;
				mtc<=0;
				mfc<=0;
		end
	end

endmodule
