`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:12 12/10/2019 
// Design Name: 
// Module Name:    dmtobridge 
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
`define LB 6'b100000
`define LBU 6'b100100
`define LH 6'b100001
`define LHU 6'b100101
`define LW 6'b100011
`define SB 6'b101000
`define SH 6'b101001
`define SW 6'b101011
module dmtobridge(
	 input [31:0] addr,
	 input [31:0] instr,
	 input [3:0] error,
	 
	 output reg PrWe,
	 output [31:2] Praddr,
	 output reg dmortimer
    );
	 assign Praddr=addr[31:2];
	always @(*)begin
		if(error==0)begin
			if(instr[31:26]==`SW&&(addr==32'h00007f00||addr==32'h00007f04||addr==32'h00007f10)||addr==32'h00007f14)begin
				PrWe<=1;
				dmortimer<=0;
			end
			else if(instr[31:26]==`LW&&(addr==32'h00007f00||addr==32'h00007f04||addr==32'h00007f08||addr==32'h00007f10)||addr==32'h00007f14||addr==32'h00007f18)begin
				PrWe<=0;
				dmortimer<=1;
			end
			else begin
				PrWe<=0;
				dmortimer<=0;
			end
		end
		else begin
			PrWe<=0;
			dmortimer<=0;
		end
	end

endmodule
