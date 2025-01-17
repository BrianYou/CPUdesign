`include "defines.v"

module pc_reg(
    input wire clk_i,
    input wire rst_i,

    //from ctrl
    input wire[5:0] stall_i,
    
    output reg[`ADDR_WIDTH-1:0] pc_o,
    output reg ce_o
    
    );

    always @(posedge clk_i)   begin
        if (rst_i == 1'b1) begin
            ce_o <= 1'b0;
        end else begin
            ce_o <= 1'b1;
        end
    end
    
    always @(posedge clk_i)  begin
        if (ce_o == 1'b0) 
            pc_o <= 32'h0;
        else if (stall_i[0]==`STOP) 
            pc_o <= pc_o;  //loop
        else  
            pc_o <= pc_o + 4;
    end

endmodule