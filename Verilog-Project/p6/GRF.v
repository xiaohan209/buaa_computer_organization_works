`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:55 11/09/2019 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input [4:0] A1,
    input [4:0] A2,
    input clk,
    input reset,
    input regWrite,
    input [4:0] A3,
	 input [31:0] wpc,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
    );
	reg [31:0] temp1;
	reg [31:0] temp2;

	reg [31:0] MemG [0:31];
	
	
	
	integer k;
	initial begin
		for(k=0;k<=31;k=k+1)begin
				MemG[k]=0;
			end
	end
	
	
	
	assign RD1=(((A1===A3)&&regWrite&&A1!=0)?WD:MemG[A1]);
	assign RD2=(((A2===A3)&&regWrite&&A2!=0)?WD:MemG[A2]);
	always @(posedge clk)begin
		if(reset)begin
			for(k=0;k<=31;k=k+1)begin
				MemG[k] <= 0;
			end
			
		end
		else begin
			if(regWrite)begin
				
				if(A3!=0)begin
					MemG[A3] <= WD;
					$display("%d@%h: $%d <= %h",$time, wpc, A3,WD);
				end
				
			end
			
		end
	end
	
	
endmodule
