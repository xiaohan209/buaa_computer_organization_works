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
module BE(
    input [31:0] addr,
    input [1:0] hbw,
    output reg [3:0] out
    );
	always @(*)begin
		case(hbw)
			1:begin
				if(addr[1]==0)begin
					out<=4'b0011;
				end
				else begin
					out<=4'b1100;
				end
			end
			2:begin
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
			end
			default:begin
				out<=4'b1111;
			end
		endcase
	end

endmodule
