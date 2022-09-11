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


module IM2(
	 input clk,
    input reset,
	 input [31:0] pc32,
	 input stall,
	 output [3:0] error,
    output [31:0] Instr,
	 output [31:0] PC4,
	 output [31:0] thisPC
    );
	 integer k;
	 integer i;
	 reg [31:0] pc;
	 reg [31:0] Mempc [3072:7167];
	 reg [31:0] temp1;
	 reg [31:0] temp2;
	 reg [31:0] temp3;
	 reg [3:0] temp4;
	 assign Instr=temp1;
	 assign PC4=temp2;
	 assign thisPC=temp3;
	 assign error=temp4;
	 initial
	 begin
	 for(k=3072;k<=7167;k=k+1)begin
		Mempc[k]=32'd0;
	 end
	 $readmemh("code.txt",Mempc);
	 $readmemh("code_handler.txt", Mempc, 4192, 5119);
	 
	 
	 
	 pc = 32'h00003000;
	 temp1 = Mempc[pc[15:2]];
	 temp2 = pc+4;
	 temp3 = pc;
	 temp4 = 0;
	 end
	 
	 always @(posedge clk)begin
		if(reset)begin
			pc = 32'h00003000;
			temp1 <= Mempc[pc[15:2]];
			temp2 <= pc+4;
			temp3 <= pc;
			temp4 <= 0;
		end
		else begin
			if(!stall)begin
				if(pc32[1:0]!=0||pc32<32'h00003000||pc32>32'h00004ffc)begin
					temp4<=4;
					pc<=pc32;
					temp1 <= 32'h00000000;
					temp2 <= pc32+4;
					temp3 <= pc32;
				end
				else begin
					temp4<=0;
					pc<=pc32;
					temp1 <= Mempc[pc32[15:2]];
					temp2 <= pc32+4;
					temp3 <= pc32;
				end
			end
			
		end
	 end
	 
	 
	 
endmodule
