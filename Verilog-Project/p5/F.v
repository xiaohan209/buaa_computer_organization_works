`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:28 11/17/2019 
// Design Name: 
// Module Name:    F 
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
module forward4(
	 input [31:0] oridata,
	 input [4:0] orireg,
	 input [3:0] tnew_e,
	 input [31:0] datae,
	 input [4:0] rege,
	 input [3:0] tnew_m,
	 input [31:0] datam,
	 input [4:0] regm,
	 input [3:0] tnew_w,
	 input [31:0] dataw,
	 input [4:0] regw,
	 output reg [31:0] dataout
    );
	always @(*)begin
		if(orireg===rege&&rege>=1&&rege<=31&&tnew_e==0)begin
			dataout<=datae;
		end
		else if(orireg===regm&&regm>=1&&regm<=31&&tnew_m==0)begin
			dataout<=datam;
		end
		else if(orireg===regw&&regw>=1&&regw<=31&&tnew_w==0)begin
			dataout<=dataw;
		end
		else begin
			dataout<=oridata;
		end
	end

endmodule

module forward3(
	 input [31:0] oridata,
	 input [4:0] orireg,
	 input [3:0] tnew_m,
	 input [31:0] datam,
	 input [4:0] regm,
	 input [3:0] tnew_w,
	 input [31:0] dataw,
	 input [4:0] regw,
	 output reg [31:0] dataout
    );
	always @(*)begin
		
		if(orireg===regm&&regm>=1&&regm<=31&&tnew_m==0)begin
			dataout<=datam;
		end
		else if(orireg===regw&&regw>=1&&regw<=31&&tnew_w==0)begin
			dataout<=dataw;
		end
		else begin
			dataout<=oridata;
		end
	end

endmodule

module forward2(
	 input [31:0] oridata,
	 input [4:0] orireg,
	 input [3:0] tnew_w,
	 input [31:0] dataw,
	 input [4:0] regw,
	 output reg [31:0] dataout
    );
	always @(*)begin
		
		
		if(orireg===regw&&regw>=1&&regw<=31&&tnew_w==0)begin
			dataout<=dataw;
		end
		else begin
			dataout<=oridata;
		end
	end

endmodule
