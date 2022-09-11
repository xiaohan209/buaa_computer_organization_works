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
module controller(
    input [31:0] instr,
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
    output reg [3:0] ALUOP,
    output reg j,
    output reg jr,
    output reg jl
    );


	always @(instr)begin
		if(instr[31:26]==6'b000000)begin
			if(instr[5:0]==6'b100001)begin //addu
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
			end
			else if(instr[5:0]==6'b100011)begin //subu
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
				ALUOP<=4'b0001;
				j<=0;
				jr<=0;
				jl<=0;
			end
			else if(instr[5:0]==6'b001000)begin  //jr
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
				ALUOP<=4'b0000;
				j<=1;
				jr<=1;
				jl<=0;
			end
			else begin  //nop
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
			end
		end
		else if(instr[31:26]==6'b001101)begin //ori
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
				ALUOP<=4'b0011;
				j<=0;
				jr<=0;
				jl<=0;
		end
		else if(instr[31:26]==6'b101011)begin //sw
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
		end
		else if(instr[31:26]==6'b100011)begin //lw
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
		end
		else if(instr[31:26]==6'b001111)begin //lui
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
				ALUOP<=4'b0101;
				j<=0;
				jr<=0;
				jl<=0;
		end
		else if(instr[31:26]==6'b000100)begin //beq
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
		end
		else if(instr[31:26]==6'b000011)begin //jal
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
				ALUOP<=4'b0000;
				j<=1;
				jr<=0;
				jl<=1;
		end
		else if(instr[31:26]==6'b001001)begin //addiu
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
		end
		else if(instr[31:26]==6'b000010)begin //j
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
				ALUOP<=4'b0000;
				j<=1;
				jr<=0;
				jl<=0;
		end
		else begin  //nop
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
				ALUOP<=4'b0000;
				j<=0;
				jr<=0;
				jl<=0;
		end
	end

endmodule
