`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:48 12/03/2019 
// Design Name: 
// Module Name:    drext 
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
module drext(
    input [31:0] DR,
    input [3:0] BE,
    input dmExt,
    output reg [31:0] DRout
    );
	always @(*)begin
		case(BE)
			4'b1111:begin
				DRout<=DR;
			end
			4'b1100:begin
				if(dmExt==1)begin
					DRout<={{16{DR[31]}},{DR[31:16]}};
				end
				else begin
					DRout<={16'b0,{DR[31:16]}};
				end
			end
			4'b0011:begin
				if(dmExt==1)begin
					DRout<={{16{DR[15]}},{DR[15:0]}};
				end
				else begin
					DRout<={16'b0,{DR[15:0]}};
				end
			end
			4'b0001:begin
				if(dmExt==1)begin
					DRout<={{24{DR[7]}},{DR[7:0]}};
				end
				else begin
					DRout<={24'b0,{DR[7:0]}};
				end
			end
			4'b0010:begin
				if(dmExt==1)begin
					DRout<={{24{DR[15]}},{DR[15:8]}};
				end
				else begin
					DRout<={24'b0,{DR[15:8]}};
				end
			end
			4'b0100:begin
				if(dmExt)begin
					DRout<={{24{DR[23]}},{DR[23:16]}};
				end
				else begin
					DRout<={24'b0,{DR[23:16]}};
				end
			end
			4'b1000:begin
				if(dmExt)begin
					DRout<={{24{DR[31]}},{DR[31:24]}};
				end
				else begin
					DRout<={24'b0,{DR[31:24]}};
				end
			end
			default:begin
				DRout<=0;
			end
		endcase
	end

endmodule
