`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:04 11/09/2019 
// Design Name: 
// Module Name:    IM 
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
module IM1(
    input clk,
    input reset,
	 input ifBranch,
	 input branchEnable,
	 input j,
	 input jr,
	 input [31:0] imm,
    output [31:0] Instr,
	 output [31:0] next,
	 output [31:0] thisInstr
    );
	 reg [31:0] Mempc [0:1023];
	 reg [31:0] pc;
	 reg [31:0] temp1;
	 reg [31:0] temp2;
	 reg [31:0] temp3;
	 integer k;
	 assign Instr=temp1;
	 assign next=temp2;
	 assign thisInstr=temp3;
	 initial
	 begin
	 for(k=0;k<=1023;k=k+1)begin
		Mempc[k]=32'd0;
	 end
	 $readmemh("code.txt",Mempc);
	 pc=32'h00003000;
	 temp1 = Mempc[pc[11:2]];
	 temp2 = pc+4;
	 temp3 = pc;
	 end
	always @(posedge clk)begin
		if(reset)begin
			pc = 32'h00003000;
		end
		else begin
			if(ifBranch && branchEnable)begin
				pc = pc + 4 + imm;
			end
			else if(jr&&j)begin
				pc = imm;
			end
			else if(j)begin
				pc = {pc[31:28],imm[25:0],2'b00};
			end
			
			else begin
				pc = pc+4;
			end
			temp1 <= Mempc[pc[11:2]];
			temp2 <= pc+4;
			temp3 <= pc;
		end
	end

endmodule

module IM2(
	 input clk,
    input reset,
	 input [31:0] pc32,
	 input stall,
    output [31:0] Instr,
	 output [31:0] PC4,
	 output [31:0] thisPC
    );
	 integer k;
	 reg [31:0] pc;
	 reg [31:0] Mempc [0:1023];
	 reg [31:0] temp1;
	 reg [31:0] temp2;
	 reg [31:0] temp3;
	 assign Instr=temp1;
	 assign PC4=temp2;
	 assign thisPC=temp3;
	 
	 initial
	 begin
	 for(k=0;k<=1023;k=k+1)begin
		Mempc[k]=32'd0;
	 end
	 $readmemh("code.txt",Mempc);
	 pc = 32'h00003000;
	 temp1 = Mempc[pc[11:2]];
	 temp2 = pc+4;
	 temp3 = pc;
	 end
	 
	 always @(posedge clk)begin
		if(reset)begin
			pc = 32'h00003000;
			temp1 <= Mempc[pc[11:2]];
			temp2 <= pc+4;
			temp3 <= pc;
		end
		else begin
			if(!stall)begin
				pc=pc32;
				temp1 <= Mempc[pc[11:2]];
				temp2 <= pc+4;
				temp3 <= pc;
			end
			
		end
	 end
	 
	 
	 
endmodule
