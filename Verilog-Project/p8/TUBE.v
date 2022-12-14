`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:14:28 12/25/2019 
// Design Name: 
// Module Name:    TUBE 
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
module TUBE(
	 input clk,
	 input reset,
	 input WE,
	 input [31:2] Addr,
	 input [31:0] Din,
    output [31:0] Dout,
	 output [7:0] digital_tube1,
	 output [3:0] digital_tube_sel1,
	 output [7:0] digital_tube2,
	 output digital_tube_sel2,
	 output [7:0] digital_tube0,
	 output [3:0] digital_tube_sel0
    );
	 reg [31:0] cnt;
	 reg [1:0] state;
	 reg [31:0] word1;
	 reg [31:0] word2;
	 
	 
	 wire [7:0] data0;
	 wire [7:0] data1;
	 wire [7:0] data2;
	 wire [7:0] data3;
	 wire [7:0] data4;
	 wire [7:0] data5;
	 wire [7:0] data6;
	 wire [7:0] data7;
	 wire [7:0] data8;
	 
	 
	 
	 
	 assign data0=(word1[3:0]==0)?8'b10000001:
						(word1[3:0]==1)?8'b11001111:
						(word1[3:0]==2)?8'b10010010:
						(word1[3:0]==3)?8'b10000110:
						(word1[3:0]==4)?8'b11001100:
						(word1[3:0]==5)?8'b10100100:
						(word1[3:0]==6)?8'b10100000:
						(word1[3:0]==7)?8'b10001111:
						(word1[3:0]==8)?8'b10000000:
						(word1[3:0]==9)?8'b10000100:
						(word1[3:0]==10)?8'b10001000:
						(word1[3:0]==11)?8'b11100000:
						(word1[3:0]==12)?8'b10110001:
						(word1[3:0]==13)?8'b11000010:
						(word1[3:0]==14)?8'b10100000:8'b10111000;
	assign data1=(word1[7:4]==0)?8'b10000001:
						(word1[7:4]==1)?8'b11001111:
						(word1[7:4]==2)?8'b10010010:
						(word1[7:4]==3)?8'b10000110:
						(word1[7:4]==4)?8'b11001100:
						(word1[7:4]==5)?8'b10100100:
						(word1[7:4]==6)?8'b10100000:
						(word1[7:4]==7)?8'b10001111:
						(word1[7:4]==8)?8'b10000000:
						(word1[7:4]==9)?8'b10000100:
						(word1[7:4]==10)?8'b10001000:
						(word1[7:4]==11)?8'b11100000:
						(word1[7:4]==12)?8'b10110001:
						(word1[7:4]==13)?8'b11000010:
						(word1[7:4]==14)?8'b10100000:8'b10111000; 
	 assign data2=(word1[11:8]==0)?8'b10000001:
						(word1[11:8]==1)?8'b11001111:
						(word1[11:8]==2)?8'b10010010:
						(word1[11:8]==3)?8'b10000110:
						(word1[11:8]==4)?8'b11001100:
						(word1[11:8]==5)?8'b10100100:
						(word1[11:8]==6)?8'b10100000:
						(word1[11:8]==7)?8'b10001111:
						(word1[11:8]==8)?8'b10000000:
						(word1[11:8]==9)?8'b10000100:
						(word1[11:8]==10)?8'b10001000:
						(word1[11:8]==11)?8'b11100000:
						(word1[11:8]==12)?8'b10110001:
						(word1[11:8]==13)?8'b11000010:
						(word1[11:8]==14)?8'b10100000:8'b10111000;
	assign data3=(word1[15:12]==0)?8'b10000001:
						(word1[15:12]==1)?8'b11001111:
						(word1[15:12]==2)?8'b10010010:
						(word1[15:12]==3)?8'b10000110:
						(word1[15:12]==4)?8'b11001100:
						(word1[15:12]==5)?8'b10100100:
						(word1[15:12]==6)?8'b10100000:
						(word1[15:12]==7)?8'b10001111:
						(word1[15:12]==8)?8'b10000000:
						(word1[15:12]==9)?8'b10000100:
						(word1[15:12]==10)?8'b10001000:
						(word1[15:12]==11)?8'b11100000:
						(word1[15:12]==12)?8'b10110001:
						(word1[15:12]==13)?8'b11000010:
						(word1[15:12]==14)?8'b10100000:8'b10111000;
	assign data4=(word1[19:16]==0)?8'b10000001:
						(word1[19:16]==1)?8'b11001111:
						(word1[19:16]==2)?8'b10010010:
						(word1[19:16]==3)?8'b10000110:
						(word1[19:16]==4)?8'b11001100:
						(word1[19:16]==5)?8'b10100100:
						(word1[19:16]==6)?8'b10100000:
						(word1[19:16]==7)?8'b10001111:
						(word1[19:16]==8)?8'b10000000:
						(word1[19:16]==9)?8'b10000100:
						(word1[19:16]==10)?8'b10001000:
						(word1[19:16]==11)?8'b11100000:
						(word1[19:16]==12)?8'b10110001:
						(word1[19:16]==13)?8'b11000010:
						(word1[19:16]==14)?8'b10100000:8'b10111000;
	 assign data4=(word1[19:16]==0)?8'b10000001:
						(word1[19:16]==1)?8'b11001111:
						(word1[19:16]==2)?8'b10010010:
						(word1[19:16]==3)?8'b10000110:
						(word1[19:16]==4)?8'b11001100:
						(word1[19:16]==5)?8'b10100100:
						(word1[19:16]==6)?8'b10100000:
						(word1[19:16]==7)?8'b10001111:
						(word1[19:16]==8)?8'b10000000:
						(word1[19:16]==9)?8'b10000100:
						(word1[19:16]==10)?8'b10001000:
						(word1[19:16]==11)?8'b11100000:
						(word1[19:16]==12)?8'b10110001:
						(word1[19:16]==13)?8'b11000010:
						(word1[19:16]==14)?8'b10100000:8'b10111000;
	assign data5=(word1[23:20]==0)?8'b10000001:
						(word1[23:20]==1)?8'b11001111:
						(word1[23:20]==2)?8'b10010010:
						(word1[23:20]==3)?8'b10000110:
						(word1[23:20]==4)?8'b11001100:
						(word1[23:20]==5)?8'b10100100:
						(word1[23:20]==6)?8'b10100000:
						(word1[23:20]==7)?8'b10001111:
						(word1[23:20]==8)?8'b10000000:
						(word1[23:20]==9)?8'b10000100:
						(word1[23:20]==10)?8'b10001000:
						(word1[23:20]==11)?8'b11100000:
						(word1[23:20]==12)?8'b10110001:
						(word1[23:20]==13)?8'b11000010:
						(word1[23:20]==14)?8'b10100000:8'b10111000;
	assign data6=(word1[27:24]==0)?8'b10000001:
						(word1[27:24]==1)?8'b11001111:
						(word1[27:24]==2)?8'b10010010:
						(word1[27:24]==3)?8'b10000110:
						(word1[27:24]==4)?8'b11001100:
						(word1[27:24]==5)?8'b10100100:
						(word1[27:24]==6)?8'b10100000:
						(word1[27:24]==7)?8'b10001111:
						(word1[27:24]==8)?8'b10000000:
						(word1[27:24]==9)?8'b10000100:
						(word1[27:24]==10)?8'b10001000:
						(word1[27:24]==11)?8'b11100000:
						(word1[27:24]==12)?8'b10110001:
						(word1[27:24]==13)?8'b11000010:
						(word1[27:24]==14)?8'b10100000:8'b10111000;
	assign data7=(word1[31:28]==0)?8'b10000001:
						(word1[31:28]==1)?8'b11001111:
						(word1[31:28]==2)?8'b10010010:
						(word1[31:28]==3)?8'b10000110:
						(word1[31:28]==4)?8'b11001100:
						(word1[31:28]==5)?8'b10100100:
						(word1[31:28]==6)?8'b10100000:
						(word1[31:28]==7)?8'b10001111:
						(word1[31:28]==8)?8'b10000000:
						(word1[31:28]==9)?8'b10000100:
						(word1[31:28]==10)?8'b10001000:
						(word1[31:28]==11)?8'b11100000:
						(word1[31:28]==12)?8'b10110001:
						(word1[31:28]==13)?8'b11000010:
						(word1[31:28]==14)?8'b10100000:8'b10111000;
	assign data8=(word2[3:0]==0)?8'b10000001:
						(word2[3:0]==1)?8'b11001111:
						(word2[3:0]==2)?8'b10010010:
						(word2[3:0]==3)?8'b10000110:
						(word2[3:0]==4)?8'b11001100:
						(word2[3:0]==5)?8'b10100100:
						(word2[3:0]==6)?8'b10100000:
						(word2[3:0]==7)?8'b10001111:
						(word2[3:0]==8)?8'b10000000:
						(word2[3:0]==9)?8'b10000100:
						(word2[3:0]==10)?8'b10001000:
						(word2[3:0]==11)?8'b11100000:
						(word2[3:0]==12)?8'b10110001:
						(word2[3:0]==13)?8'b11000010:
						(word2[3:0]==14)?8'b10100000:8'b10111000;
	assign Dout=(Addr==32'h00007f38)?word1:(Addr==32'h00007f3c)?word2:32'd0;
	
	assign digital_tube0 = (state==0)?data0:
								(state==1)?data1:
								(state==2)?data2:data3;
	assign digital_tube1 = (state==0)?data4:
								(state==1)?data5:
								(state==2)?data6:data7;
	assign digital_tube2 = data8;

	assign digital_tube_sel0 = (state==0)?4'd1:
								(state==1)?4'd2:
								(state==2)?4'd4:4'd8;
	assign digital_tube_sel1 = (state==0)?4'd1:
								(state==1)?4'd2:
								(state==2)?4'd4:4'd8;
	assign digital_tube_sel2 = (state==0)?1'b1:
								(state==1)?1'b1:
								(state==2)?1'b1:1'b1;
								
	
	 
	 initial begin
		cnt<=10000;
		word1<=0;
		word2<=0;
		state<=0;
		
	 end
	 
	 always @(posedge clk)begin
		if(reset)begin
			cnt<=10000;
			word1<=0;
			word2<=0;
			state<=0;
		end
		else if(WE)begin
			if({Addr,2'b00}==32'h00007f38)begin
				word1<=Din;
			end
			else if({Addr,2'b00}==32'h00007f3c)begin
				word2<=Din;
			end
		end
		else begin
			if(cnt>=1)begin
				cnt<=cnt-1;
			end
			else begin
				cnt<=10000;
				case(state)
					0:begin
						state<=1;
					end
					1:begin
						state<=2;
					end
					2:begin
						state<=3;
					end
					default:begin
						state<=0;
					end
				endcase
			end
		end
	 end
	 
	 
	 
endmodule
