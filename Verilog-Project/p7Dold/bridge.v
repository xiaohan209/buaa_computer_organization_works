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
	 input [31:0] RD1,
	 input [31:0] RD2,
	 output [31:2] addr,
	 output [31:0] WD,
	 output reg WE1,
	 output reg WE2,
	 output reg [31:0] PrRD,
	 output reg PrRe
    );
	 assign addr=Praddr;
	 assign WD=PrWD;
	 
	always @(*)begin
		if({Praddr,2'b00}>=32'h00007f00&&{Praddr,2'b00}<=32'h00007f0b)begin
			WE1<=PrWe;
			WE2<=0;
			
		end
		else if({Praddr,2'b00}>=32'h00007f10&&{Praddr,2'b00}<=32'h00007f1b)begin
			WE2<=PrWe;
			WE1<=0;
			
		end
		else begin
			WE1<=0;
			WE2<=0;
			
		end
		if({Praddr,2'b00}>=32'h00007f00&&{Praddr,2'b00}<=32'h00007f0b)begin
			PrRD<=RD1;
			PrRe<=1;
		end
		else if({Praddr,2'b00}>=32'h00007f10&&{Praddr,2'b00}<=32'h00007f1b)begin
			PrRD<=RD2;
			PrRe<=1;
		end
		else begin
			PrRD<=0;
			PrRe<=0;
		end
	end

endmodule
