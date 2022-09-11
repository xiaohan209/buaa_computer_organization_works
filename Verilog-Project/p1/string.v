`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:56 10/19/2019 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output reg out
    );
	reg [1:0] z;
	initial
	begin
	z=2'b00;
	end
	always @(posedge clk or posedge clr)begin
		if(clr) begin
			z<=2'b00;
			out=0;
		end
		else begin
			case(z)
			2'b00:begin
				if(in>=48&&in<=57)begin
					z<=2'b01;
					out<=1;
				end
				else begin
					z<=2'b11;
					out<=0;
				end
			end
			2'b01:begin
				if(in>=42&&in<=43)begin
					z<=2'b00;
					out<=0;
				end
				else begin
					z<=2'b11;
					out<=0;
				end
			end
			default:begin
				z<=2'b11;
				out<=0;
			end
			endcase
		end
	end

endmodule
