`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:25:20 12/09/2019 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
	 input [31:2] Praddr,
	 input [31:0] PrWD,
	 input PrWe,
	 input [31:0] RD1,//timer
	 input [31:0] RD2,//uart
	 input [31:0] RD3,//onoff
	 input [31:0] RD4,//led
	 input [31:0] RD5,//tube
	 input [31:0] RD6,//keys
	 output [31:2] addr,
	 output [31:0] WD,
	 output reg WE1,
	 output reg WE2,
	 output reg WE4,
	 output reg WE5,
	 output reg [31:0] PrRD,
	 output reg PrRe
    );
	 assign addr=Praddr;
	 assign WD=PrWD;
	 
	always @(*)begin
		if({Praddr,2'b00}>=32'h00007f00&&{Praddr,2'b00}<=32'h00007f08)begin//timer
			WE1<=PrWe;
			WE2<=0;
			WE4<=0;
			WE5<=0;
		end
		else if({Praddr,2'b00}>=32'h00007f10&&{Praddr,2'b00}<=32'h00007f2b)begin//uart
			
			
		end
		else if({Praddr,2'b00}==32'h00007f34)begin//led
			WE1<=0;
			WE2<=0;
			WE4<=PrWe;
			WE5<=0;
		end
		else if({Praddr,2'b00}>=32'h00007f38&&{Praddr,2'b00}<=32'h00007f3f)begin//tube
			WE1<=0;
			WE2<=0;
			WE4<=0;
			WE5<=PrWe;
		end
		else begin
			WE1<=0;
			WE2<=0;
			WE4<=0;
			WE5<=0;
		end
		if({Praddr,2'b00}>=32'h00007f00&&{Praddr,2'b00}<=32'h00007f0b)begin//timer
			PrRD<=RD1;
			PrRe<=1;
		end
		else if({Praddr,2'b00}>=32'h00007f10&&{Praddr,2'b00}<=32'h00007f2b)begin//uart
			
		end
		else if({Praddr,2'b00}>=32'h00007f2c&&{Praddr,2'b00}<=32'h00007f33)begin//onoff
			PrRD<=RD3;
			PrRe<=1;
		end
		else if({Praddr,2'b00}==32'h00007f34)begin//led
			PrRD<=RD4;
			PrRe<=1;
		end
		else if({Praddr,2'b00}>=32'h00007f38&&{Praddr,2'b00}<=32'h00007f3f)begin//tube
			PrRD<=RD5;
			PrRe<=1;
		end
		else if({Praddr,2'b00}==32'h00007f40)begin//keys
			PrRD<=RD6;
			PrRe<=1;
		end
		
		else begin
			PrRD<=0;
			PrRe<=0;
		end
	end

endmodule
