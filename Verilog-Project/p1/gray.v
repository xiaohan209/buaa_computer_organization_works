`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:38 10/19/2019 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
	 reg [2:0] hh;
	 reg h;
	 initial 
	 begin
	 hh=0;
	 h=0;
	 end
	 always @(posedge Clk)begin
		if(Reset==1)begin
			hh<=3'b000;
			h=0;
		end
		else if(En==1)begin
			case(hh)
			3'b000:begin
				hh<=3'b001;
				
			end
			3'b001:hh<=3'b011;
			3'b010:hh<=3'b110;
			3'b011:hh<=3'b010;
			3'b100:begin
				h=1;
				hh<=3'b000;
				
			end
			3'b101:hh<=3'b100;
			3'b110:hh<=3'b111;
			3'b111:hh<=3'b101;
			endcase
		end
	 end
	 assign Output=hh;
	 assign Overflow=h;
endmodule
