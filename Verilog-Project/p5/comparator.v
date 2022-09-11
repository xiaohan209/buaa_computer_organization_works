`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:55:45 11/19/2019 
// Design Name: 
// Module Name:    comparator 
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
module comparator(
    input [31:0] A1,
    input [31:0] A2,
    input [3:0] OP,
    output reg branch
    );
	 always @(*)begin
		case(OP)
			0:begin
				if(A1==A2)begin
					branch <= 1;
				end
				else begin
					branch <= 0;
				end
			end
			1:begin
				if(A1>=A2)begin
					branch <= 1;
				end
				else begin
					branch <= 0;
				end
			end
			2:begin
				if(A1>A2)begin
					branch <= 1;
				end
				else begin
					branch <= 0;
				end
			end
			3:begin
				if(A1<=A2)begin
					branch <= 1;
				end
				else begin
					branch <= 0;
				end
			end
			4:begin
				if(A1<A2)begin
					branch <= 1;
				end
				else begin
					branch <= 0;
				end
			end
			5:begin
				if(A1!=A2)begin
					branch <= 1;
				end
				else begin
					branch <= 0;
				end
			end
			default:begin
				branch <= 0;
			end
		endcase
	 end

endmodule
