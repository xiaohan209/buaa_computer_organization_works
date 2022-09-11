`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:46 11/18/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset,
	 input interrupt,
	 output [31:0] addr
    );
	 wire [7:2] HWInt;
	 wire timer2irq;
	 wire timer1irq;
	 wire [31:0] timer1Dout;
	 wire [31:0] timer2Dout;
	 wire [31:2] Praddr;
	 wire [31:2] bridgeaddr;
	 wire [3:0] PrBE;
	 wire [31:0] PrWD;
	 wire PrWe;
	 wire [31:0] WD;
	 wire WE1;
	 wire WE2;
	 wire [31:0] PrRD;
	 wire PrRe;
	 
	 assign HWInt={3'b000,{interrupt},{timer2irq},{timer1irq}};
	 
	datapath datapath1(.clk(clk),.reset(reset),.PrRD(PrRD),.HWInt(HWInt),.PrRe(PrRe),
	.addr(addr),.Praddr(Praddr),.PrBE(PrBE),.PrWD(PrWD),.PrWe(PrWe));
	
	
	timer timer1(.clk(clk),.reset(reset),.Addr(bridgeaddr),.WE(WE1),.Din(WD),.IRQ(timer1irq),.Dout(timer1Dout));
	timer timer2(.clk(clk),.reset(reset),.Addr(bridgeaddr),.WE(WE2),.Din(WD),.IRQ(timer2irq),.Dout(timer2Dout));
	bridge sbridge(.Praddr(Praddr),.PrWD(PrWD),.PrWe(PrWe),.RD1(timer1Dout),.RD2(timer2Dout),.addr(bridgeaddr),
					.WD(WD),.WE1(WE1),.WE2(WE2),.PrRD(PrRD),.PrRe(PrRe));
	
	 

endmodule
