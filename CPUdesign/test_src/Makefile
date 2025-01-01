CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32ima -mabi=ilp32 -g -Wall
# -mabi=ilp32 abi 32位元
# -nostdlib -fno-builtin 不要用內建函數
# -g debugger 要用到的時候才要下的參數，會保留編譯細節，通常純軟debugger才會用到
#  -march=rv32ima 用rv32ima指令集
CC = ${CROSS_COMPILE}gcc
# 在bash 裡面輸入riscv64-unknown-elf- 按兩次會跳出tool chain這會讓他自己去找 riscv64-unknown-elf-gcc裡面的適合的指令（因為我們的CROSS_COMPILE已經define）
# elf是格式
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump
# 看gcc 出來的結果 gcc的dump的意思

.DEFAULT_GOAL := all
all: 
	${CC} ${CFLAGS} test.S -Ttext=0x00000000 -o test.elf
# -Ttext=0x00000000 指令開頭放在這裡
	${OBJCOPY} -O binary test.elf test.bin

.PHONY : code
code: all
# @${OBJDUMP} -S test.elf | less
	@${OBJDUMP} -S test.elf >> test.txt

.PHONY : hex
hex: all
	@hexdump -C test.bin

.PHONY : clean
clean:
	rm -rf *.o *.bin *.elf