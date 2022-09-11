`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:44:48 12/04/2019 
// Design Name: 
// Module Name:    mude 
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
module mude(
	 input clk,
	 input reset,
    input [31:0] src1,
    input [31:0] src2,
	 input start,
	 input [2:0] mudeop,

    output [31:0] out,
    output reg busy
    );
	 reg [31:0] hi;
	 reg [31:0] lo;
	 reg [63:0] temp;
	 reg [3:0] cnt;
	 reg [2:0] opin;
	 initial begin
		hi=0;
		lo=0;
		busy=0;
		temp=0;
		cnt=0;
		opin=0;
	 end
	 assign out=(mudeop==6)?hi:(mudeop==7)?lo:32'd0;
	always @(posedge clk)begin
		if(reset)begin
			hi<=0;
			lo<=0;
			busy<=0;
			temp<=0;
			cnt<=0;
			opin<=0;
		end
		else begin
			if(start==1)begin
				busy<=1;
				cnt<=0;
				opin<=mudeop;
				case(mudeop)
					0:begin
						temp<=$signed($signed({{32{src1[31]}},{src1}})*$signed({{32{src2[31]}},{src2}}));
					end
					1:begin
						temp<=$unsigned($unsigned({32'b0,{src1}})*$unsigned({32'b0,{src2}}));
					end
					2:begin
						if(src2!=0)begin
							temp[63:32]<=$signed(src1)-$signed(src1)/$signed(src2)*$signed(src2);
							temp[31:0]<=$signed($signed(src1)/$signed(src2));
						end
						else begin
							temp[63:32]<=hi;
							temp[31:0]<=lo;
						end
					end
					3:begin
						if(src2!=0)begin
							temp[63:32]<=$unsigned($unsigned(src1)%$unsigned(src2));
							temp[31:0]<=$unsigned($unsigned(src1)/$unsigned(src2));
						end
						else begin
							temp[63:32]<=hi;
							temp[31:0]<=lo;
						end
					end
					default:begin
					end
					
				endcase
			end
			else if(busy==1)begin
				case(cnt)
					0:begin
						cnt<=cnt+1;
					end
					1:begin
						cnt<=cnt+1;
					end
					2:begin
						cnt<=cnt+1;
					end
					3:begin
						cnt<=cnt+1;
					end
					4:begin
						if(opin==0||opin==1)begin
							hi<=temp[63:32];
							lo<=temp[31:0];
							busy<=0;
							temp<=0;
							cnt<=0;
							opin<=0;
						end
						else begin
							cnt<=cnt+1;
						end
					end
					5:begin
						cnt<=cnt+1;
					end
					6:begin
						cnt<=cnt+1;
					end
					7:begin
						cnt<=cnt+1;
					end
					8:begin
						cnt<=cnt+1;
					end
					9:begin
							hi<=temp[63:32];
							lo<=temp[31:0];
							busy<=0;
							temp<=0;
							cnt<=0;
							opin<=0;
					end
				endcase
			end
			else begin
				if(mudeop==4)begin
					hi<=src1;
				end
				else if(mudeop==5)begin
					lo<=src1;
				end
				else begin
				end
			end
		end
	end

endmodule
