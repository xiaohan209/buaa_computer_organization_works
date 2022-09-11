`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:18:27 12/25/2019 
// Design Name: 
// Module Name:    LED 
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
module LED(
	 input clk,
    input reset,
    input [31:2] Addr,
    input WE,
    input [31:0] Din,
	 output reg [31:0] led_light
    );
	
	 initial begin
		led_light=32'd0;
	 end
	 
	 always @(posedge clk)begin
		if(reset)begin
			led_light<=32'd0;
		end
		else if(WE)begin
			led_light<=Din;
		end
		
	 end

endmodule
