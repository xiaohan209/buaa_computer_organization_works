`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:32:36 12/10/2019 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
	 input clk,
	 input reset,
	 input [4:0] A1,//du
	 input [4:0] A2,//xie
	 input WE,
	 input bd,
	 input [31:0] Din,
	 input [31:0] PC_d,
	 input [31:0] PC_e,
    input [31:0] PC_m,
	 input [31:0] PC_w,
	 input [7:2] HWInt,
	 input [3:0] error,
	 input clear,
	 
	 output errored,
	 
    output [31:0] PCout,
	 output [31:0] out
    );
	reg [31:0] SR;
	reg [31:0] Cause;
	reg [31:0] EPC;
	reg [31:0] PRId;
	wire iszhongduan;
	wire isyichang;
	assign iszhongduan=|(HWInt[7:2]&SR[15:10])&&SR[0]&&~SR[1];
	assign isyichang=(error!=0)&&~SR[1];
	assign errored=isyichang||iszhongduan;
	assign PCout=EPC;
	assign out=(A1==12)?SR:A1==13?Cause:A1==14?EPC:A1==15?PRId:32'd0;
	initial begin
		SR=0;
		Cause=0;
		EPC=0;
		PRId=32'h18373541;
	end
	
	always @(posedge clk)begin
		if(reset)begin
			SR<=0;
			Cause<=0;
			EPC<=0;
			PRId<=32'h18373541;
		end
		else begin
			Cause[15:10]<=HWInt[7:2];
			if(clear)begin
				SR[1]<=0;
			end
			else if(iszhongduan||isyichang)begin
					SR[1]<=1;
					Cause[6:2]<=iszhongduan?5'b0:{1'b0,error};
					Cause[31]<=bd;
					if(bd)begin
						EPC<={PC_w[31:2],2'b00};
					end
					else begin
						if(PC_m!=0)begin
							EPC<={PC_m[31:2],2'b00};
						end
						else if(PC_e!=0)begin
							EPC<={PC_e[31:2],2'b00};
						end
						else begin
							EPC<={PC_d[31:2],2'b00};
						end
					end
				
			end
			
			else if(WE)begin
				case(A2)
					12:begin
						SR<=Din;
					end
					14:begin
						EPC<={Din[31:2],2'b00};
					end
				endcase
			end
			else begin
			end
		end
	end
endmodule
