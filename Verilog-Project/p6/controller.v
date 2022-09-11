`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:00 11/18/2019 
// Design Name: 
// Module Name:    controller 
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
module controller(
		input md,
		input busy,
		input start,
		input [3:0] tuse,
		input [4:0] needreg1,
		input [4:0] needreg2,
		
		input [3:0] tnew_E,
		input [4:0] writereg_E,
		
		input [3:0] tnew_M,
		input [4:0] writereg_M,
		
		input [3:0] tnew_W,
		input [4:0] writereg_W,
		
		output reg stallpc,
		output reg stalld,
		output reg stalle,
		output reg stallm,
		output reg stallw
    );
	 initial begin
		stallpc=0;
		stalld=0;
		stalle=0;
		stallm=0;
		stallw=0;
	 end
	always @(*)begin
		if(md&&(start||busy))begin
			stallpc <= 1;
			stalld <= 1;
			stalle <= 0;
			stallm <= 0;
			stallw <= 0;
		end
		else if(tuse<tnew_E&&((needreg1===writereg_E&&writereg_E!=0)||(needreg2===writereg_E&&writereg_E!=0)))begin
			stallpc <= 1;
			stalld <= 1;
			stalle <= 0;
			stallm <= 0;
			stallw <= 0;
		end
		else if(tuse<tnew_M&&((needreg1===writereg_M&&writereg_M!=0)||(needreg2===writereg_M&&writereg_M!=0)))begin
			stallpc <= 1;
			stalld <= 1;
			stalle <= 0;
			stallm <= 0;
			stallw <= 0;
		end
		else if(tuse<tnew_W&&((needreg1===writereg_W&&writereg_W!=0)||(needreg2===writereg_W&&writereg_W!=0)))begin
			stallpc <= 1;
			stalld <= 1;
			stalle <= 0;
			stallm <= 0;
			stallw <= 0;
		end
		else begin
			stallpc <= 0;
			stalld <= 0;
			stalle <= 0;
			stallm <= 0;
			stallw <= 0;
		end
		
	end

endmodule
