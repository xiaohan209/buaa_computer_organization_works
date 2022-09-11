`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:48:00 12/03/2019 
// Design Name: 
// Module Name:    BE 
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
`define LB 6'b100000
`define LBU 6'b100100
`define LH 6'b100001
`define LHU 6'b100101
`define LW 6'b100011
`define SB 6'b101000
`define SH 6'b101001
`define SW 6'b101011
module BE(
	 input [31:0] instr,
    input [31:0] addr,
    input [1:0] hbw,
    output reg [3:0] out,
	 output reg [3:0] error
    );
	 initial begin
		error<=0;
	 end
	always @(*)begin
		case(hbw)
			1:begin
				if(addr[31:0]>=32'h00003000)begin
					if(instr[31:26]==`LH||instr[31:26]==`LHU)begin
						out<=4'b0000;
						error<=4;
					end
					else if(instr[31:26]==`SH)begin
						out<=4'b0000;
						error<=5;
					end
				end
				else if(addr[0]!=0)begin
					if(instr[31:26]==`LH||instr[31:26]==`LHU)begin
						out<=4'b0000;
						error<=4;
					end
					else if(instr[31:26]==`SH)begin
						out<=4'b0000;
						error<=5;
					end
				end
				else if(addr[1]==0)begin
					out<=4'b0011;
					error<=0;
				end
				else begin
					out<=4'b1100;
					error<=0;
				end
			end
			2:begin
				if(addr[31:0]>=32'h00003000)begin
					if(instr[31:26]==`LB||instr[31:26]==`LBU)begin
						out<=4'b0000;
						error<=4;
					end
					else if(instr[31:26]==`SB)begin
						out<=4'b0000;
						error<=5;
					end
				end
				else begin 
					case(addr[1:0])
						0:begin
							out<=4'b0001;
						end
						1:begin
							out<=4'b0010;
						end
						2:begin
							out<=4'b0100;
						end
						default:begin
							out<=4'b1000;
						end
					endcase
					error<=0;
				end
			end
			default:begin
				if(instr[31:26]==`LW)begin
					if(addr[31:0]>=32'h00003000&&addr[31:0]!=32'h00007f00&&addr[31:0]!=32'h00007f04&&addr[31:0]!=32'h00007f08&&addr[31:0]!=32'h00007f10&&addr[31:0]!=32'h00007f14&&addr[31:0]!=32'h00007f18)begin
						out<=4'b0000;
						error<=4;
					end
					else if(addr[1:0]!=0)begin
						out<=4'b0000;
						error<=4;
					end
					else begin
						out<=4'b1111;
						error<=0;
					end
				end
				else if(instr[31:26]==`SW)begin
					if(addr[31:0]>=32'h00003000&&addr[31:0]!=32'h00007f00&&addr[31:0]!=32'h00007f04&&addr[31:0]!=32'h00007f10&&addr[31:0]!=32'h00007f14)begin
						out<=4'b0000;
						error<=5;
					end
					else if(addr[1:0]!=0)begin
						out<=4'b0000;
						error<=5;
						
					end
					else begin
						out<=4'b1111;
						error<=0;
					end
				end
				else begin
					out<=4'b0000;
					error<=0;
				end
			end
		endcase
	end

endmodule
