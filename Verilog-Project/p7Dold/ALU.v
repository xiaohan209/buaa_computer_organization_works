`timescale 1ns / 1ps
module ALU(
	 
    input [31:0] Src1,
    input [31:0] Src2,
    input [4:0] ALUOP,
    output [31:0] Result,
    output [3:0] error
    );
	 reg [31:0] temp;
	 reg [3:0] error_temp;
	 reg [32:0] mid;
	 initial begin
		temp=0;
		error_temp=0;
	 end
	 assign Result=temp;
	 assign error=error_temp;
	always @(*)begin
		case(ALUOP)
			0:begin//jia
				temp<=Src1+Src2;
				error_temp<=0;
			end
			1:begin//jian
				temp<=Src1-Src2;
				error_temp<=0;
			end
			2:begin//yu
				temp<=Src1&Src2;
				error_temp<=0;
			end
			3:begin//huo
				temp<=Src1|Src2;
				error_temp<=0;
			end
			4:begin//yihuo
				temp<=Src1^Src2;
				error_temp<=0;
			end
			5:begin//zuoyi16
				temp<=Src2<<16;
				error_temp<=0;
			end
			6:begin//nor
				temp<=~(Src1|Src2);
				error_temp<=0;
			end
			7:begin//sll
				temp<=Src1<<(Src2[10:6]);
				error_temp<=0;
			end
			8:begin//sllv
				temp<=Src2<<(Src1[4:0]);
				error_temp<=0;
			end
			9:begin//srl
				temp<=Src1>>(Src2[10:6]);
				error_temp<=0;
			end
			10:begin//srlv
				temp<=Src2>>(Src1[4:0]);
				error_temp<=0;
			end
			11:begin//sra
				temp<=$signed(Src1)>>>(Src2[10:6]);
				error_temp<=0;
			end
			12:begin//srav
				temp<=$signed(Src2)>>>(Src1[4:0]);
				error_temp<=0;
			end
			13:begin//slt(i)
				if($signed(Src1)<$signed(Src2))begin
					temp<=1;
				end
				else begin
					temp<=0;
				end
				error_temp<=0;
			end
			14:begin//slt(i)u
				if($unsigned(Src1)<$unsigned(Src2))begin
					temp<=1;
				end
				else begin
					temp<=0;
				end
				error_temp<=0;
			end
			15:begin//CAL_add
				mid={Src1[31],Src1[31:0]}+{Src2[31],Src2[31:0]};
				if(mid[32]!=mid[31])begin
					error_temp<=12;
				end
				else begin
					temp<=mid[31:0];
					error_temp<=0;
				end
			end
			16:begin//Cal_sub
				mid={Src1[31],Src1[31:0]}-{Src2[31],Src2[31:0]};
				if(mid[32]!=mid[31])begin
					error_temp<=12;
				end
				else begin
					temp<=mid[31:0];
					error_temp<=0;
				end
			end
			17:begin//LW_add
				mid={Src1[31],Src1[31:0]}+{Src2[31],Src2[31:0]};
				if(mid[32]!=mid[31])begin
					error_temp<=4;
				end
				else begin
					temp<=mid[31:0];
					error_temp<=0;
				end
			end
			18:begin//SW_add
				mid={Src1[31],Src1[31:0]}+{Src2[31],Src2[31:0]};
				if(mid[32]!=mid[31])begin
					error_temp<=5;
					temp<=mid[31:0];
				end
				else begin
					temp<=mid[31:0];
					error_temp<=0;
				end
			end
			19:begin//rt
				temp<=Src2;
				error_temp<=0;
			end
			default:begin
				temp<=0;
				error_temp<=0;
			end
		endcase
	end

endmodule
