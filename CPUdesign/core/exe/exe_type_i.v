`include "defines.v"

module exe_type_i(
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg reg_we_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];


    wire isType_i;
    assign isType_i = (opcode == `INST_TYPE_I);
    
    always @(*) begin
        if (rst_i == 1 || isType_i==0) begin
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
            if (opcode == `INST_TYPE_I) begin
                    case(funct3)
                        `INST_ORI: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//ORI
                        `INST_ADDI: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i + op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//ADDI
                        `INST_SLTI: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = (op1_i < op2_i) ? (32'b1) : (32'b0);
                            reg_we_o = `WRITE_ENABLE;
                        end//SLTI
                        `INST_SLTIU: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = ($unsigned(op1_i) < $unsigned(op2_i)) ? (32'b1) : (32'b0);
                            reg_we_o = `WRITE_ENABLE;
                        end//SLTIU
                        `INST_XORI: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//XORI
                        `INST_ANDI: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//ANDI
                        `INST_SLLI: begin
                            //reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i << (op2_i[4:0]);
                            reg_we_o = `WRITE_ENABLE;
                        end//SLLI
                        `INST_SRLI_SRAI: begin
                            case(funct7)
                                7'b0000000: begin
                                //reg_waddr_o = reg_waddr_i;
                                reg_wdata_o = op1_i >> (op2_i[4:0]);
                                reg_we_o = `WRITE_ENABLE;
                            end
                                7'b0100000: begin
                                //reg_waddr_o = reg_waddr_i;
                                reg_wdata_o = $signed(op1_i) >>> (op2_i[4:0]);
                                reg_we_o = `WRITE_ENABLE;
                                end
                            default: begin
                            end
                            endcase
                        end//SRLI or SLAI
                        default: begin
                            reg_wdata_o = `ZERO;
			                reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
            end else begin
                        reg_wdata_o = `ZERO;
                        reg_we_o = `WRITE_DISABLE;
            end //if
        end//if
    end //always
endmodule