entity Component {
    in  clock  clock
    in  signal bit[3 downto 0]  -- this will use std_logic_vector. "raw" keyword prepended can be used to force VHDL raw types (is this a bad idea?)
    out signal integer range 0 to 7
}
