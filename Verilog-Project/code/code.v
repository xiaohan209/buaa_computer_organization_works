`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:36 09/17/2019 
// Design Name: 
// Module Name:    code 
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
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output [63:0] Output0,
    output [63:0] Output1
	 
    );
	 reg [2:0] count1;
	 reg [63:0] jicun1;
	 reg [63:0] jicun2;
	 
	 assign Output0=jicun1;
	 assign Output1=jicun2;
	 
	 initial
	 begin
	 jicun1=64'b0;
	 jicun2=64'b0;
	 count1=3'b0;
	 
	 end
	 
	 always @(posedge Clk)
	 begin
		
		if(Reset==1'b1)
		begin
		   
			jicun1<=0;
			jicun2<=0;
			count1<=0;
		end
		else if(En==1'b1)
		begin
			if(Slt==1'b0)jicun1<=jicun1+1;
			else count1<=count1+1;
		end
		
	 end
		
			
		
	 
	 always @(count1)
	 begin
		if(count1==3'b100)begin
		count1<=0;
		jicun2<=jicun2+1;
		end
	 end

endmodule
