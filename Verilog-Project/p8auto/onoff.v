`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:49:37 12/24/2019 
// Design Name: 
// Module Name:    onoff 
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
module onoff(
    input [31:2] Addr,
    output [31:0] Dout,
    input [7:0] dip_switch0,
	 input [7:0] dip_switch1,
	 input [7:0] dip_switch2,
	 input [7:0] dip_switch3,
	 input [7:0] dip_switch4,
	 input [7:0] dip_switch5,
	 input [7:0] dip_switch6,
	 input [7:0] dip_switch7
    );
	 
	 
	 assign Dout = ({Addr[31:2],2'b00}==32'h00007f2c)?{{dip_switch3},{dip_switch2},{dip_switch1},{dip_switch0}}:
					 ({Addr[31:2],2'b00}==32'h00007f30)?{{dip_switch7},{dip_switch6},{dip_switch5},{dip_switch4}}:32'd0;
	 
	 
	 
	 
	 
	 

endmodule
