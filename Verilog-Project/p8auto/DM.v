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
		input clk2,
		input reset,
		input errored,
		input memWrite,
		input [31:0] memData,
		input [31:0] memAddr,
		input [31:0] pc,
		input [3:0] BE,
		output [31:0] dataOut,
		output wee
    );
	 reg [31:0] datatemp;
	 reg [3:0] BEtemp;
	 wire [31:0] realaddr;
	 
	 assign realaddr={{memAddr[31:2]},2'b00};
	 assign we=memWrite&&realaddr<32'h00002000&&(errored!=1);
	 assign wee=we;
	 DMCORE dmcore(
  .clka(clk2), // input clka
  .rsta(reset), // input rsta
  .wea(BEtemp), // input [3 : 0] wea
  .addra(realaddr[12:2]), // input [10 : 0] addra
  .dina(datatemp), // input [31 : 0] dina
  .douta(dataOut) // output [31 : 0] douta
);
	 always @(*)begin
		if(we)begin
			BEtemp<=BE;
			case(BE)
				4'b0011:begin
					datatemp<={16'd0,memData[15:0]};
				end
				4'b1100:begin
					datatemp<={memData[15:0],16'd0};
				end
				4'b0001:begin
					datatemp<={24'd0,memData[7:0]};
				end
				4'b0010:begin
					datatemp<={16'd0,memData[7:0],8'd0};
				end
				4'b0100:begin
					datatemp<={8'd0,memData[7:0],16'd0};
				end
				4'b1000:begin
					datatemp<={memData[7:0],24'd0};
				end
				4'b1111:begin
					datatemp<=memData;
				end
				default:begin
					datatemp<=0;
				end
			endcase
		end
		else begin
			BEtemp<=4'b0000;
		end
	end
	 


endmodule
