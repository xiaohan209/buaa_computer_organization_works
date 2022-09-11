`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:05 11/19/2019 
// Design Name: 
// Module Name:    usenew 
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
module Tuse(
    input [31:0] instr,
	 
	 output reg [3:0] tuse,
	 output reg [4:0] needreg1,
	 output reg [4:0] needreg2
    );
	 always @(*)begin
		if(instr[31:26]==6'b000000)begin
			if(instr[5:0]==6'b100001)begin //addu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==6'b100011)begin //subu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
			end
			else if(instr[5:0]==6'b001000)begin  //jr
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=0;
			end
			else begin  //nop
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
			end
		end
		else if(instr[31:26]==6'b001101)begin //ori
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==6'b101011)begin //sw
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==6'b100011)begin //lw
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==6'b001111)begin //lui
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
		else if(instr[31:26]==6'b000100)begin //beq
				tuse<=0;
				needreg1<=instr[25:21];
				needreg2<=instr[20:16];
		end
		else if(instr[31:26]==6'b000011)begin //jal
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
		else if(instr[31:26]==6'b001001)begin //addiu
				tuse<=1;
				needreg1<=instr[25:21];
				needreg2<=0;
		end
		else if(instr[31:26]==6'b000010)begin //j
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
		else begin  //nop
				tuse<=10;
				needreg1<=0;
				needreg2<=0;
		end
	 
	 end

endmodule

module TnewE(
    input [31:0] instr,
	 input [31:0] PC8,
	 output reg [3:0] tnew,
	 output reg [4:0] writereg,
	 output reg [31:0] writedata
    );
	 always @(*)begin
		if(instr[31:26]==6'b000000)begin
			if(instr[5:0]==6'b100001)begin //addu
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==6'b100011)begin //subu
				tnew<=1;
				writereg<=instr[15:11];
				writedata<=0;
			end
			else if(instr[5:0]==6'b001000)begin  //jr
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
		end
		else if(instr[31:26]==6'b001101)begin //ori
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==6'b101011)begin //sw
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==6'b100011)begin //lw
				tnew<=2;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==6'b001111)begin //lui
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==6'b000100)begin //beq
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==6'b000011)begin //jal
				tnew<=0;
				writereg<=31;
				writedata<=PC8;
		end
		else if(instr[31:26]==6'b001001)begin //addiu
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==6'b000010)begin //j
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
	 end 
endmodule

module TnewM(
    input [31:0] instr,
	 input [31:0] AO,
	 input [31:0] PC8,
	 output reg [3:0] tnew,
	 output reg [4:0] writereg,
	 output reg [31:0] writedata
    );
	 always @(*)begin
		if(instr[31:26]==6'b000000)begin
			if(instr[5:0]==6'b100001)begin //addu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==6'b100011)begin //subu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==6'b001000)begin  //jr
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
		end
		else if(instr[31:26]==6'b001101)begin //ori
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==6'b101011)begin //sw
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==6'b100011)begin //lw
				tnew<=1;
				writereg<=instr[20:16];
				writedata<=0;
		end
		else if(instr[31:26]==6'b001111)begin //lui
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==6'b000100)begin //beq
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==6'b000011)begin //jal
				tnew<=0;
				writereg<=31;
				writedata<=PC8;
		end
		else if(instr[31:26]==6'b001001)begin //addiu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==6'b000010)begin //j
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
	 end
endmodule


module TnewW(
    input [31:0] instr,
	 input [31:0] DR,
	 input [31:0] AO,
	 input [31:0] PC8,
	 output reg [3:0] tnew,
	 output reg [4:0] writereg,
	 output reg [31:0] writedata
    );
	 always @(*)begin
		if(instr[31:26]==6'b000000)begin
			if(instr[5:0]==6'b100001)begin //addu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==6'b100011)begin //subu
				tnew<=0;
				writereg<=instr[15:11];
				writedata<=AO;
			end
			else if(instr[5:0]==6'b001000)begin  //jr
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
			else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
			end
		end
		else if(instr[31:26]==6'b001101)begin //ori
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==6'b101011)begin //sw
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==6'b100011)begin //lw
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=DR;
		end
		else if(instr[31:26]==6'b001111)begin //lui
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==6'b000100)begin //beq
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else if(instr[31:26]==6'b000011)begin //jal
				tnew<=0;
				writereg<=31;
				writedata<=PC8;
		end
		else if(instr[31:26]==6'b001001)begin //addiu
				tnew<=0;
				writereg<=instr[20:16];
				writedata<=AO;
		end
		else if(instr[31:26]==6'b000010)begin //j
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
		else begin  //nop
				tnew<=0;
				writereg<=0;
				writedata<=0;
		end
	 end
endmodule
