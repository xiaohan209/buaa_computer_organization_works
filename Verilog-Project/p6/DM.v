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
		input [3:0] BE,
		output [31:0] dataOut
    );
	 reg [31:0] Mem [0:4095];
	 reg [31:0] temp;
	 reg [31:0] writein;
	 wire [31:0] realaddr;
	 assign dataOut=Mem[memAddr[13:2]];
	 assign realaddr={{memAddr[31:2]},2'b00};
	 integer k;
	 initial begin
		for (k=0; k<=4095; k=k+1) begin
            Mem[k] <= 32'd0;
         end
	 end
	 always @(posedge clk)begin
		if(reset)begin
			for (k=0; k<=4095; k=k+1) begin
            Mem[k] <= 32'd0;
         end
		end
		else begin
			if(memWrite)begin
				case(BE)
					4'b1111:begin
						writein=memData;
					end
					4'b1100:begin
						writein={{memData[15:0]},{Mem[memAddr[13:2]][15:0]}};
					end
					4'b0011:begin
						writein={{Mem[memAddr[13:2]][31:16]},{memData[15:0]}};
					end
					4'b0001:begin
						writein={{Mem[memAddr[13:2]][31:8]},{memData[7:0]}};
					end
					4'b0010:begin
						writein={{Mem[memAddr[13:2]][31:16]},{memData[7:0]},{Mem[memAddr[13:2]][7:0]}};
					end
					4'b0100:begin
						writein={{Mem[memAddr[13:2]][31:24]},{memData[7:0]},{Mem[memAddr[13:2]][15:0]}};
					end
					4'b1000:begin
						writein={{memData[7:0]},{Mem[memAddr[13:2]][23:0]}};
					end
					default:begin
						writein=memData;
					end
				endcase
				Mem[memAddr[13:2]] <= writein;
				$display("%d@%h: *%h <= %h",$time,pc, realaddr,writein);
				
			end
		end
	 end


endmodule
