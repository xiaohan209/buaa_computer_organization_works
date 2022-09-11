`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:36:01 11/09/2019 
// Design Name: 
// Module Name:    extender 
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
module extend(
    input [31:0] instr,
    input siExt,
    input shift2,
    output [31:0] imm
    );
	 wire [31:0] temp;
	 wire [31:0] sig;
	 wire [31:0] nsig;
	 wire [31:0] shift;
	 wire [31:0] nshift;
	 assign sig={{16{instr[15]}},instr[15:0]};
	 assign nsig={16'd0,instr[15:0]};
	 
	mux32 mux1(.src1(nsig),.src2(sig),.op(siExt),.out(temp));
	assign nshift=temp;
	assign shift={temp[29:0],2'b0};
	mux32 mux2(.src1(nshift),.src2(shift),.op(shift2),.out(imm));

endmodule


module extend16forpc(
	 input [31:0] instr,
	 input [31:0] pc,
    output [31:0] imm
    );
	 wire [31:0] temp;
	 assign temp={{16{instr[15]}},instr[15:0]};
	 assign imm=pc+4+(temp<<2);
	 
endmodule
	 
module extend26forpc(
	 input [31:0] instr,
	 input [31:0] pc,
    output [31:0] imm
    );
	 assign imm = {pc[31:28],instr[25:0],2'b00};
	 
endmodule
	 
	 