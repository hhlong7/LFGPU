import cocotb
from cocotb.triggers import RisingEdge
from .helpers.setup import setup
from .helpers.memory import Memory
from .helpers.format import format_cycle
from .helpers.logger import logger

@cocotb.test()
async def test_matadd(dut):
    # Program Memory
    program_memory = Memory(dut=dut, addr_bits=8, data_bits=16, channels=1, name="program", delay=1)
    program = [
        0b0101000011011110, # 50DE MUL R0, %blockIdx, %blockDim
        0b0011000000001111, # 300F ADD R0, R0, %threadIdx         ; i = blockIdx * blockDim + threadIdx
        0b1001000100000000, # 9100 CONST R1, #0                   ; baseA (matrix A base address)
        0b1001001000001000, # 9208 CONST R2, #8                   ; baseB (matrix B base address)
        0b1001001100010000, # 9310 CONST R3, #16                  ; baseC (matrix C base address)
        0b1001001100010000, # 9310 CONST R3, #24                  ; baseC (matrix C base address)
        
        0b0011010000010000, # 3410 ADD R4, R1, R0                 ; addr(A[i]) = baseA + i
        0b0111010001000000, # 7440 LDR R4, R4                     ; load A[i] from global memory
        0b1001100000000100, # 9804 CONST R8, #4                   ; baseB (matrix B base address)
        0b0010000010000000, # 2080 CMP R8, R0 
        0b0001000100000000, # 1100 BRnzp
        0b0011010100100000, # 3520 ADD R5, R2, R0                 ; addr(B[i]) = baseB + i
        0b1011000000000001, # JOIN
        0b0011010101100000, # ADD R5, R3, R0                 ; addr(B[i]) = baseB + i
        0b1011000000000001, # JOIN
        0b0111010101010000, # LDR R5, R5                     ; load B[i] from global memory
        0b0011011001000101, # ADD R6, R4, R5                 ; C[i] = A[i] + B[i]
        0b0011011100110000, # ADD R7, R3, R0                 ; addr(C[i]) = baseC + i
        0b1000000001110110, # STR R7, R6                     ; store C[i] in global memory
        0b1111000000000000, # RET                            ; end of kernel
    ]

    # Data Memory
    data_memory = Memory(dut=dut, addr_bits=8, data_bits=8, channels=4, name="data", delay=1)
    data = [
        0, 1, 2, 3, 4, 5, 6, 7, # Matrix A (1 x 8)
        0, 1, 2, 3, 4, 5, 6, 7, # Matrix B (1 x 8)
        0, 2, 4, 6, 8, 10, 12, 14   # Matrix C (1 x 8)
    ]

    # Device Control
    threads = 8

    await setup(
        dut=dut,
        program_memory=program_memory,
        program=program,
        data_memory=data_memory,
        data=data,
        threads=threads
    )

    data_memory.display(24)

    cycles = 0
    while dut.done.value != 1:
        data_memory.run()
        program_memory.run()

        await cocotb.triggers.ReadOnly()
        format_cycle(dut, cycles)
        
        await RisingEdge(dut.clk)
        cycles += 1

    logger.info(f"Completed in {cycles} cycles")
    data_memory.display(24)

    expected_results = [a + b for a, b in zip(data[0:8], data[8:16])]
    for i, expected in enumerate(expected_results):
        result = data_memory.memory[i + 16]
        assert result == expected, f"Result mismatch at index {i}: expected {expected}, got {result}"