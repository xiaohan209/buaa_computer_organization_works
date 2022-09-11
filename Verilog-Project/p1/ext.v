`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:22:24 10/18/2019 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output reg [31:0] ext
    );
	 reg [31:0] A;
	 reg [31:0] B;
	 reg [31:0] C;
	 reg [31:0] D;
	 always @(*)
	 begin
	 case (EOp)
	 2'b00:ext= {{16{imm[15]}},imm};
	 2'b01:ext={{16{0}},imm};
	 2'b10:ext={imm,{16{0}}};
	 3'b11:begin
	 A={{16{imm[15]}},imm};
	 ext=A<<2;
	 end
	 endcase
	 
	 end

endmodule
