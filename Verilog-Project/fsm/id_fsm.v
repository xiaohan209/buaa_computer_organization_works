`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:16:36 09/19/2019 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );
	 reg [1:0] status;
	 reg chu;
	 assign out=chu;
	 initial begin
	 status=0;
	 end
	 always @(posedge clk)begin
		case(status)
		0:begin
			if((char<8'd91&&char>8'd64)||(char<8'd123&&char>8'd96))begin
				status<=1;
				chu=0;
			end
			else begin
				if(char<8'd58&&char>8'd47)begin
					status<=0;
					chu=0;
				end
				else begin
					status<=0;
					chu=0;
				end
			end
			
		end
		1:begin
			if((char<8'd91&&char>8'd64)||(char<8'd123&&char>8'd96))begin
				status<=1;
				chu=0;
			end
			else begin
				if(char<8'd58&&char>8'd47)begin
					status<=3;
					chu=1;
				end
				else begin
					status<=0;
					chu=0;
				end
			end
			
		end
//		2:begin
//			if((char<8'd91&&char>8'd64)||(char<8'd123&&char>8'd96))begin
//				status<=3;
//				chu=1;
//			end
//			else begin
//				if(char<8'd58&&char>8'd47)begin
//					status<=2;
//					chu=0;
//				end
//				else begin
//					status<=0;
//					chu=0;
//				end
//			end
//			
//		end
		3:begin
			if((char<8'd91&&char>8'd64)||(char<8'd123&&char>8'd96))begin
				status<=1;
				chu=0;
			end
			else begin 
				if(char<8'd58&&char>8'd47)begin
					status<=3;
					chu=1;
				end
				else begin
					status<=0;
					chu=0;
				end
			end
			
		end
		endcase
		
		
	 end

endmodule
