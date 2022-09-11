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
			0:begin
				temp<=Src1+Src2;
			end
			1:begin
				temp<=Src1-Src2;
			end
			2:begin
				temp<=Src1&Src2;
			end
			3:begin
				temp<=Src1|Src2;
			end
			4:begin
				temp<=Src1^Src2;
			end
			5:begin
				temp<=Src2<<16;
			end
			default:begin
				temp<=0;
			end
		endcase
	end

endmodule
