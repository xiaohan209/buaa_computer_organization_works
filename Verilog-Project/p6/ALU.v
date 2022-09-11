`timescale 1ns / 1ps
module ALU(
	 
    input [31:0] Src1,
    input [31:0] Src2,
    input [3:0] ALUOP,
    output [31:0] Result
    
    );
	 reg [31:0] temp;
	 
	 assign Result=temp;
	 
	always @(*)begin
		case(ALUOP)
			0:begin//jia
				temp<=Src1+Src2;
			end
			1:begin//jian
				temp<=Src1-Src2;
			end
			2:begin//yu
				temp<=Src1&Src2;
			end
			3:begin//huo
				temp<=Src1|Src2;
			end
			4:begin//yihuo
				temp<=Src1^Src2;
			end
			5:begin//zuoyi16
				temp<=Src2<<16;
			end
			6:begin//nor
				temp<=~(Src1|Src2);
			end
			7:begin//sll
				temp<=Src1<<(Src2[10:6]);
			end
			8:begin//sllv
				temp<=Src2<<(Src1[4:0]);
			end
			9:begin//srl
				temp<=Src1>>(Src2[10:6]);
			end
			10:begin//srlv
				temp<=Src2>>(Src1[4:0]);
			end
			11:begin//sra
				temp<=$signed(Src1)>>>(Src2[10:6]);
			end
			12:begin//srav
				temp<=$signed(Src2)>>>(Src1[4:0]);
			end
			13:begin//slt(i)
				if($signed(Src1)<$signed(Src2))begin
					temp<=1;
				end
				else begin
					temp<=0;
				end
			end
			14:begin//slt(i)u
				if($unsigned(Src1)<$unsigned(Src2))begin
					temp<=1;
				end
				else begin
					temp<=0;
				end
			end
			default:begin
				temp<=0;
			end
		endcase
	end

endmodule
