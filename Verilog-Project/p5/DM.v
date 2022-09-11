`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:25:01 11/08/2019 
// Design Name: 
// Module Name:    DM 
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
module DM(
		input clk,
		input reset,
		input memWrite,
		input [31:0] memData,
		input [31:0] memAddr,
		input [31:0] pc,
		output [31:0] dataOut
    );
	 reg [31:0] Mem [0:1023];
	 reg [31:0] temp;
	 assign dataOut=Mem[memAddr[11:2]];
	 integer k;
	 initial begin
		for (k=0; k<=1023; k=k+1) begin
            Mem[k] <= 32'd0;
         end
	 end
	 always @(posedge clk)begin
		if(reset)begin
			for (k=0; k<=1023; k=k+1) begin
            Mem[k] <= 32'd0;
         end
		end
		else begin
			if(memWrite)begin
				Mem[memAddr[11:2]] <= memData;
				$display("%d@%h: *%h <= %h",$time,pc, memAddr,memData);
				
			end
			
		end
	 end


endmodule
