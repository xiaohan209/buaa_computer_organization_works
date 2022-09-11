`timescale 1ns / 1ps
module ALU(
    input [31:0] Src1,
    input [31:0] Src2,
    input [3:0] ALUOP,
    output [31:0] Result,
    output Branch
    );
	 reg [31:0] temp;
	 reg p;
	 assign Result=temp;
	 assign Branch=p;
	always @(*)begin
		case(ALUOP)
			0:begin
				temp<=Src1+Src2;
				if(Src1==Src2)begin
					p<=1;
				end
				else begin
					p<=0;
				end
			end
			1:begin
				temp<=Src1-Src2;
				if(Src1>=Src2)begin
					p<=1;
				end
				else begin
					p<=0;
				end
			end
			2:begin
				temp<=Src1&Src2;
				if(Src1>Src2)begin
					p<=1;
				end
				else begin
					p<=0;
				end
			end
			3:begin
				temp<=Src1|Src2;
				if(Src1<=Src2)begin
					p<=1;
				end
				else begin
					p<=0;
				end
			end
			4:begin
				temp<=Src1^Src2;
				if(Src1<Src2)begin
					p<=1;
				end
				else begin
					p<=0;
				end
			end
			5:begin
				temp<=Src2<<16;
				if(Src1!=Src2)begin
					p<=1;
				end
				else begin
					p<=0;
				end
			end
			default:begin
				temp<=0;
				p<=0;
			end
		endcase
	end

endmodule
