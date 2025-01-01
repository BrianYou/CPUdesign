TOP = test_top
GTKWAVE = gtkwave

V_SRC = ./core/test_top.v
V_SRC += $(wildcard ./core/if/*.v)
V_SRC += $(wildcard ./core/id/*.v)
V_SRC += $(wildcard ./core/exe/*.v)
V_SRC += $(wildcard ./core/mem/*.v)
V_SRC += $(wildcard ./core/wb/*.v)
V_SRC += $(wildcard ./core/device/*.v)
V_SRC += $(wildcard ./core/ctrl/*.v)

# wildcard命令，會把所有的 ./core/if/ 的資料夾裡面的.v檔，串在一起成為字串 中間用空個分開
# 總部可能手打一堆指令去把檔案編譯吧XD

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./core/${TOP}.v
INC = -Icore/include
PROG = test
PROG_S = $(wildcard ./test_src/*.S)
TEST_SRC = ./test_src

.DEFAULT_GOAL := all
all: vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} 
	verilator -Wall --cc --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
	
obj_dir/V${TOP}.exe : obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

test_src/${PROG}.bin:
	$(MAKE) -C test_src

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

.PHONY : run
run: test_src/${PROG}.bin obj_dir/V${TOP}.exe 
	obj_dir/V${TOP} test_src/${PROG}.bin

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : code
code:
	$(MAKE) -C test_src code

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin
