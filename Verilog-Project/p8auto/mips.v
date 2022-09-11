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
    input clk_in,
    input sys_rstn,
	 input [7:0] dip_switch0,
	 input [7:0] dip_switch1,
	 input [7:0] dip_switch2,
	 input [7:0] dip_switch3,
	 input [7:0] dip_switch4,
	 input [7:0] dip_switch5,
	 input [7:0] dip_switch6,
	 input [7:0] dip_switch7,
	 
	 output [31:0] led_light,
	 
	 output [7:0] digital_tube1,
	 output [3:0] digital_tube_sel1,
	 output [7:0] digital_tube2,
	 output digital_tube_sel2,
	 output [7:0] digital_tube0,
	 output [3:0] digital_tube_sel0,
	 
	 input [7:0] user_key,
	 input uart_rxd,
	 output uart_txd,
	 input uart_rxd2,
	 output uart_txd2
    );
	 wire zhongduan;
	 wire reset;
	 wire clk1;
	 wire clk2;
	 wire [7:2] HWInt;
	 wire timer1irq;
	 wire uartirq;
	 wire keysirq;
	 wire [31:2] Praddr;
	 wire [31:2] bridgeaddr;
	 wire [3:0] PrBE;
	 wire [31:0] PrWD;
	 wire PrWe;
	 wire [31:0] WD;
	 wire WE1;
	 wire WE2;
	 wire WE4;
	 wire WE5;
	 wire [31:0] PrRD;
	 wire PrRe;
	 wire [31:0] timer1Dout;
	 wire [31:0] onoffDout;
	 wire [31:0] ledDout;
	 wire [31:0] tubeDout;
	 wire [31:0] keysDout;
	 wire [31:0] uartDout;
	 wire [31:0] M_WData;
	 wire wee;
	 
	 CLK clock
   (// Clock in ports
    .CLK_IN1(clk_in),      // IN
    // Clock out ports
    .CLK_OUT1(clk1),     // OUT
    .CLK_OUT2(clk2));    // OUT
	 
	 
	 
	 assign HWInt={3'b000,{keysirq},{uartirq},{timer1irq}};
	 assign led_light=ledDout;
	 assign reset=~sys_rstn;
	 
	 
	 
	 
	 
	 wrapper wrp(.clk(clk1),.reset(reset),.M_addr({Praddr,2'b00}),.M_WE(wee),.M_WData(M_WData),.rxd(uart_rxd2),.TxD(uart_txd2));
	datapath datapath1(.clk(clk1),.clk2(clk2),.reset(reset),.PrRD(PrRD),.HWInt(HWInt),.PrRe(PrRe),
				.Praddr(Praddr),.PrBE(PrBE),.PrWD(PrWD),.PrWe(PrWe),.zhongduan(zhongduan),.M_WData(M_WData),.wee(wee));
	
	
	timer timer1(.clk(clk1),.reset(reset),.Addr(bridgeaddr),.WE(WE1),.Din(WD),.IRQ(timer1irq),.Dout(timer1Dout));
	
	MiniUART miniuart(.CLK_I(clk1),.DAT_I(WD),.DAT_O(uartDout),.RST_I(reset),.RxD(uart_rxd),.TxD(uart_txd),
						.WE_I(WE2),.STB_I(WE2),.ADD_I({~bridgeaddr[4],bridgeaddr[3:2]}),.zhongduan(zhongduan),.irq(uartirq));
    
    
	
	
	onoff onoff1(.Addr(bridgeaddr),.Dout(onoffDout),.dip_switch0(dip_switch0),.dip_switch1(dip_switch1),.dip_switch2(dip_switch2),
				.dip_switch3(dip_switch3),.dip_switch4(dip_switch4),.dip_switch5(dip_switch0),.dip_switch6(dip_switch6),
				.dip_switch7(dip_switch0));
	LED led(.clk(clk1),.reset(reset),.Addr(bridgeaddr),.WE(WE4),.Din(WD),.led_light(ledDout));
	TUBE tube(.clk(clk1),.reset(reset),.Addr(bridgeaddr),.WE(WE5),.Din(WD),.Dout(tubeDout),.digital_tube1(digital_tube1),
			.digital_tube_sel1(digital_tube_sel1),.digital_tube2(digital_tube2),.digital_tube_sel2(digital_tube_sel2),
			.digital_tube0(digital_tube0),.digital_tube_sel0(digital_tube_sel0));
	KEYS keys(.Addr(bridgeaddr),.Dout(keysDout),.user_key(user_key),.irq(keysirq));
	bridge sbridge(.Praddr(Praddr),.PrWD(PrWD),.PrWe(PrWe),.RD1(timer1Dout),.RD2(uartDout),.RD3(onoffDout),.RD4(ledDout),
	.RD5(tubeDout),.RD6(keysDout),.addr(bridgeaddr),.WD(WD),.WE1(WE1),.WE2(WE2),.WE4(WE4),.WE5(WE5),.PrRD(PrRD),.PrRe(PrRe));
	
	 

endmodule
