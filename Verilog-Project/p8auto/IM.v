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
	 input clk2,
    input reset,
	 input [31:0] pc32,
	 input stall,
	 output [3:0] error,
    output [31:0] Instr,
	 output [31:0] PC4,
	 output [31:0] thisPC
    );
	 wire [31:0] douta;
	 
	 wire [31:0] pc;
	 
	 reg [31:0] temp1;
	 reg [31:0] temp2;
	 reg [31:0] temp3;
	 reg [3:0] temp4;
	 reg [31:0] tempp;
	 assign Instr=temp1;
	 assign PC4=temp2;
	 assign thisPC=temp3;
	 assign error=temp4;
	 assign pc=(reset)?32'h00000000:pc32-32'h00003000;
	 
	 initial begin
	 
	 temp2 <= 32'h00003004;
	 temp3 <= 32'h00003000;
	 temp4 <= 0;
	 tempp <= 32'h00003000;
	 end
	 
	 IMCORE imcore (
  .clka(clk2), // input clka
  .wea(4'b0000), // input [3 : 0] wea
  .addra(pc[12:2]), // input [10 : 0] addra
  .dina(32'h00000000),
  .douta(douta) // output [31 : 0] douta
);

	 always @(posedge clk)begin
		if(reset)begin
			temp1 <= douta;
			temp2 <= 32'h00003004;
			temp3 <= 32'h00003000;
			temp4 <= 0;
		end
		else begin
			if(!stall)begin
				if(pc32[1:0]!=0||pc32<32'h00003000||pc32>32'h00004ffc)begin
					temp4<=4;
					
					temp1 <= 32'h00000000;
					
					temp2 <= pc32+4;
					temp3 <= pc32;
				end
				else begin
					temp4<=0;
					
					temp1 <= douta;
					temp2 <= pc32+4;
					temp3 <= pc32;
				end
			end
			
		end
	 end
	 
	 
	 
endmodule

