----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:00:57 11/07/2019 
-- Design Name: 
-- Module Name:    c - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity c is
    Port ( in1 : in  STD_LOGIC_VECTOR (6 downto 0);
           in2 : in  STD_LOGIC_VECTOR (6 downto 0);
           sel : out  STD_LOGIC;
           out : in  STD_LOGIC_VECTOR (6 downto 0));
end c;


architecture Behavioral of c is

begin


end Behavioral;





