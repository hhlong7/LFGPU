# General Accelrator Renderer(GAR)

A minimal RISC-V GPU implementation in Verilog built by cal poly CARP on top of the tiny-gpu architecture

### Table of Contents

- [Overview](#overview)
- [Architecture](#architecture)
  - [GPU](#gpu)
  - [Memory](#memory)
  - [Core](#core)
- [ISA](#isa)
- [Execution](#execution)
  - [Core](#core-1)
  - [Thread](#thread)
- [Kernels](#kernels)
  - [Matrix Addition](#matrix-addition)
  - [Matrix Multiplication](/tree/master?tab=readme-ov-file#matrix-multiplication)
- [Simulation](#simulation)
- [How to Use](#how-to-use)
  - [Prerequisites](#prerequisites)
  - [Run an Existing Kernel](#run-an-existing-kernel)
  - [Write and Run Your Own Kernel](#write-and-run-your-own-kernel)
- [Performance Measurement](#performance-measurement)
  - [Milestone Performance Results](#milestone-performance-results)
  - [Milestone 1: RV32IM Scalar Correctness](#milestone-1-rv32im-scalar-correctness)
  - [Milestone 2: Single-Warp Compiler Kernels](#milestone-2-single-warp-compiler-kernels)
- [Advanced Functionality](#advanced-functionality)
- [Next Steps](#next-steps)

# Overview

This project is built on top of the [tiny-gpu](https://github.com/adam-maj/tiny-gpu) by adam maj, it is important to go through his read me to understand the foundation of our project.

The goal of this project is to help introduce Cal Poly CARP student to GPU architecture with getting hands on experience with building, designing and verification on a GPU.

Our current project is expanding the ISA to accomodate RISC-V and to be able to take advantage of the compiler built by the [vortex](https://vortex.cc.gatech.edu/) team at georgia tech.

## Whats New in GAR?

> [!IMPORTANT]
>
> **Current GAR expantions** 
> Make sure to read and understand the orginal tiny-gpu before starting to got throught the GAR core because every thing we do is going to build off that 
> 


1. **Warp scheduler** - this addition allows for a parameterizable warp size that is composed from the thread block that is scheduled onto the compute core, but also has warps scheduled in a round robin fasion
  a

# Architecture

<p float="left">
  <img src="/docs/images/gpu.png" alt="GPU" width="48%">
  <img src="/docs/images/core.png" alt="Core" width="48%">
</p>

## GPU

The top-level `gpu` module instantiates the dispatcher, two memory controllers (one for program memory, one for data memory), and `NUM_CORES` compute cores. It exposes an external async memory interface and a simple start/done handshake for the host.

Key parameters (set at elaboration time):
- `NUM_CORES` — number of parallel compute cores
- `WARPS_PER_CORE` — warps each core can interleave
- `THREADS_PER_WARP` — SIMD width (lanes per warp)
- `THREADS_PER_BLOCK` — total threads per dispatched block

### Device Control Register

The device control register (`dcr.sv`) holds an 8-bit `thread_count` value written by the host before asserting `start`. The dispatcher reads this to know how many total threads the kernel requires and divides them into blocks of `THREADS_PER_BLOCK`.

### Dispatcher

The dispatcher (`dispatch.sv`) divides the total thread count into fixed-size blocks and assigns them to cores as cores become free.

- Computes `total_blocks = ceil(thread_count / THREADS_PER_BLOCK)`
- Tracks `blocks_dispatched` and `blocks_done` independently
- When a core finishes its block (`core_done` asserts), the dispatcher resets that core and immediately hands it the next unstarted block
- Handles the last (potentially partial) block — sends the correct `core_thread_count` when `thread_count` is not a multiple of `THREADS_PER_BLOCK`
- Asserts `done` once `blocks_done == total_blocks`

## Memory

The GPU uses an external asynchronous memory model — program memory and data memory live outside the GPU and are accessed over a valid/ready handshake bus. In simulation, both are implemented as Python objects in the cocotb testbench.

### Global Memory

Global memory is a flat byte-addressed 32-bit word array. The initial contents (input data) are loaded by the testbench from the assembled JSON file before `start` is asserted. Kernel outputs are written here by `SW`/`SH`/`SB` instructions and read back by the testbench after `done` asserts.

- Address width: 32 bits (RV32I byte addressing)
- Data width: 32 bits per word
- Access channels: 4 concurrent read/write channels to data memory, 1 to program memory
- Latency: configurable per test (`memory_delay` in the JSON, default = 2 cycles)

### Memory Controllers

The memory controller (`controller.sv`) sits between the cores and external memory, arbitrating concurrent requests across a limited number of memory channels.

There are two instances:
- **Data memory controller** — serves all LSUs across all cores (up to `NUM_CORES × THREADS_PER_WARP` consumers, 4 channels)
- **Program memory controller** — serves one fetcher per core (read-only, 1 channel)

Each channel runs an independent 5-state FSM:

```
IDLE → READ_WAITING → READ_RELAYING → IDLE
IDLE → WRITE_WAITING → WRITE_RELAYING → IDLE
```

In `IDLE`, the channel scans consumers round-robin for a pending valid request and claims it. It then issues the request to external memory, waits for `mem_read_ready`/`mem_write_ready`, relays the result back to the consumer, and resets to `IDLE`. A `channel_serving_consumer` bitmask prevents two channels from claiming the same request simultaneously.

### Cache (WIP)

No cache is currently implemented. All loads and stores go directly to global memory through the controller. Adding a cache is listed as a future milestone.

## Core

Each compute core runs multiple warps through the 6-stage pipeline. It instantiates one fetcher, one decoder, one warp scheduler, one warp manager, and `THREADS_PER_WARP` instances each of: register file, ALU, LSU, PC, and CSR bank.

### Warp Scheduler

The warp scheduler (`warp_scheduler.sv`) is the central control unit of the core. It interleaves `WARPS_PER_CORE` warps through the pipeline in round-robin order, hiding memory latency by switching to a ready warp while another warp waits on a load or store.

Each warp tracks three pieces of state:
- **`warps_states`** — which pipeline stage this warp is in (FETCH/DECODE/…/DONE)
- **`warp_status`** — READY, STALL, MASKED, or SCHEDULED
- **`warp_pcs`** — the current program counter for this warp

On every `IDLE` cycle the scheduler picks the next warp in round-robin order, loads its PC, and drives it through the pipeline. In `WAIT`, the scheduler checks all LSU states and holds the warp there until every thread's memory request has resolved. When a warp hits `ebreak` (`decoded_ret`), its state is set to `DONE`. When all warps are done, the core asserts `done`.

### Fetcher

The fetcher (`fetcher.sv`) issues a single read request to program memory for the current warp's PC and holds the returned 32-bit instruction until the decoder consumes it.

3-state FSM: `IDLE → FETCHING → FETCHED`

The PC is byte-addressed (RV32I), so the fetcher right-shifts it by 2 to produce a word address before sending it to the memory controller. It stays in `FETCHED` until the pipeline advances to `DECODE`, then returns to `IDLE`.

### Decoder

The decoder (`decoder.sv`) translates a 32-bit RV32IM instruction into all control signals in a single `DECODE` cycle. It handles all 10 opcode classes:

| Opcode class | Instructions |
|---|---|
| R-type | ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND + all RV32M |
| I-ALU | ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI |
| LOAD | LB, LH, LW, LBU, LHU |
| STORE | SB, SH, SW |
| BRANCH | BEQ, BNE, BLT, BGE, BLTU, BGEU |
| JAL / JALR | Unconditional jumps with link |
| LUI / AUIPC | Upper-immediate and PC-relative upper |
| SYSTEM | CSRR (reads threadIdx/blockIdx/blockDim) + EBREAK |

All five immediate formats (I/S/B/U/J) are reconstructed and sign-extended to 32 bits combinationally. The decoder also flags `divergence_event` on any branch instruction for the divergence stack.

### Register Files

Each thread has its own register file (`registers.sv`) with 32 × 32-bit registers. `x0` is hardwired to zero and can never be written (RV32I ABI). Reads happen in `DECODE`; writes happen in `UPDATE`.

The writeback source is selected by `decoded_reg_input_mux`:

| Value | Source |
|---|---|
| `00` | ALU result |
| `01` | Memory load (from LSU) |
| `10` | PC+4 (JAL/JALR return address) |
| `11` | CSR read result (threadIdx / blockIdx / blockDim) |

### ALUs

Each thread has a dedicated ALU (`alu.sv`) that computes one result per `EXECUTE` cycle. It implements the full RV32IM operation set — 24 operations total:

- **RV32I base (10):** ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
- **Branch comparators (6):** BEQ, BNE, BLT, BGE, BLTU, BGEU — output `alu_out[0]` as a taken/not-taken flag for the PC
- **RV32M multiply (4):** MUL, MULH, MULHSU, MULHU
- **RV32M divide (4):** DIV, DIVU, REM, REMU — with correct handling of divide-by-zero and signed overflow corner cases per the RISC-V spec

Operand A is either `rs1` or `current_pc` (for AUIPC). Operand B is either `rs2` or the sign-extended immediate.

### LSUs

Each thread has a dedicated load-store unit (`lsu.sv`) that handles one memory transaction at a time. It runs a 4-state FSM: `IDLE → REQUESTING → WAITING → DONE`.

Supported widths (selected by `funct3`):

| Instruction | Width | Sign |
|---|---|---|
| LB / SB | 8-bit | signed / — |
| LH / SH | 16-bit | signed / — |
| LW / SW | 32-bit | — / — |
| LBU | 8-bit | zero-extended |
| LHU | 16-bit | zero-extended |

The effective address is computed as `rs1 + immediate`. Loaded data is sign- or zero-extended to 32 bits before being written to the register file.

### PCs

Each thread has a program counter (`pc.sv`) that computes `next_pc` during `EXECUTE`. Four modes are supported via `decoded_pc_src`:

| Mode | Next PC |
|---|---|
| Sequential | `PC + 4` |
| Branch | `PC + imm_b` if ALU taken flag is set, else `PC + 4` |
| JAL | `PC + imm_j` (unconditional) |
| JALR | `(rs1 + imm_i) & ~1` (unconditional, clears bit 0) |

Disabled threads (masked out by the divergence stack) still advance their PC sequentially so the warp scheduler always has a valid `next_pc` to read from the head thread.

# ISA

![ISA](/docs/images/riscv_isa.png)



# Execution

### Core

Each core follows the following control flow going through different stages to execute each instruction:

1. `FETCH` - Fetch the next instruction at current program counter from program memory.
2. `DECODE` - Decode the instruction into control signals.
3. `REQUEST` - Request data from global memory if necessary (if `LDR` or `STR` instruction).
4. `WAIT` - Wait for data from global memory if applicable.
5. `EXECUTE` - Execute any computations on data.
6. `UPDATE` - Update register files and NZP register.

The control flow is laid out like this for the sake of simplicity and understandability.

In practice, several of these steps could be compressed to be optimize processing times, and the GPU could also use **pipelining** to stream and coordinate the execution of many instructions on a cores resources without waiting for previous instructions to finish.

### Thread

Each thread is an independent lane of execution within a warp. Threads within the same warp execute in lockstep (SIMD) — they share a PC and pipeline state, but each has its own private register file and its own LSU.

**Per-thread resources:**
- **Register file** — 32 × 32-bit registers (x0 hardwired to zero per RV32I ABI)
- **ALU** — computes arithmetic, logic, multiply/divide, and branch comparisons
- **LSU** — issues independent load/store requests to data memory
- **PC** — tracks the thread's next instruction address
- **CSR bank** — read-only, provides thread identity (threadIdx, blockIdx, blockDim)

**Thread identity** is read via `csrr` instructions at the start of every kernel:

```asm
csrr a0, 0xCC0   ; threadIdx — index within the current block (0 … blockDim-1)
csrr a1, 0xCC1   ; blockIdx  — which block this thread was dispatched to
csrr a2, 0xCC2   ; blockDim  — number of threads per block
```

Threads use these values to compute a unique global index (`i = blockIdx * blockDim + threadIdx`) and map it to a position in their input/output arrays.

A thread signals completion by executing `ebreak` (encoded as `0x00100073`). When all threads in a warp have reached `ebreak`, the warp transitions to `DONE` and the core notifies the dispatcher that its block is finished.



# Simulation

tiny-gpu is setup to simulate the execution of both of the above kernels. Before simulating, you'll need to install [iverilog](https://steveicarus.github.io/iverilog/usage/installation.html) and [cocotb](https://docs.cocotb.org/en/stable/install.html):


# How to Use

## Prerequisites

Install the following tools before doing anything else:

- Download the latest version of sv2v from https://github.com/zachjs/sv2v/releases, unzip it and put the binary in $PATH.

```bash
# Icarus Verilog simulator
brew install icarus-verilog        # macOS
sudo apt install iverilog          # Ubuntu/Debian

# Python simulation framework
pip3 install cocotb

# SystemVerilog → Verilog converter
# Download the binary from https://github.com/zachjs/sv2v/releases
# Unzip and place sv2v in your $PATH

# Rust toolchain (for the assembler)
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh

# Create the build directory
mkdir -p build
```

## Run an Existing Kernel

The build system compiles all SystemVerilog sources to `build/gpu.v` automatically on first run.

```bash
# Vector addition (8 threads)
make test_matadd

# Matrix multiply (2×2 and 4×4)
make test_matmul

# Negative and signed arithmetic
make test_negatives
```

Each test prints a cycle-by-cycle execution trace to `test/logs/` and ends with:

```
finished at cycle <N>
Completed in <N> cycles
```

The final data memory dump shows the output values written by the kernel — compare against the expected results to verify correctness.

## Write and Run Your Own Kernel

### Step 1 — Write the assembly

Create `tiny-gpu-assembler/asm_src/test_<name>.asm`. The assembler speaks standard RV32IM assembly with three GPU-specific directives:

```asm
; my_kernel.asm — adds a scalar offset to every element
.threads 8                     ; number of GPU threads to launch
.data 10 20 30 40 50 60 70 80 ; initial data memory (loaded before kernel runs)

; Each thread computes its own index:
csrr  a0, 0xCC0    ; a0 = threadIdx  (which thread am I?)
csrr  a1, 0xCC1    ; a1 = blockIdx
csrr  a2, 0xCC2    ; a2 = blockDim
mul   a1, a1, a2   ; blockIdx * blockDim
add   a0, a0, a1   ; i = blockIdx * blockDim + threadIdx

slli  t0, a0, 2    ; byte offset = i * 4
lw    t1, 0(t0)    ; load input[i]

li    t2, 100
add   t1, t1, t2   ; input[i] + 100

sw    t1, 0(t0)    ; store result back

ebreak             ; signal this thread is done — every kernel must end with ebreak
```

**Special CSR reads (thread identity):**

| CSR address | ABI name | Value |
|------------|----------|-------|
| `0xCC0` | `threadIdx` | This thread's index within the block (0 … blockDim-1) |
| `0xCC1` | `blockIdx` | Which block this thread belongs to |
| `0xCC2` | `blockDim` | Number of threads per block |

Supported instructions: all RV32I base instructions plus RV32M multiply/divide (`mul`, `mulh`, `div`, `rem`, etc.). Every kernel must terminate with `ebreak`.

### Step 2 — Assemble it

```bash
make assemble_<name>
# Example:
make assemble_my_kernel
```

This produces `tiny-gpu-assembler/asm_build/test_<name>.json` containing the encoded program and initial data memory.

### Step 3 — Write a cocotb test

Create `test/test_<name>.py`:

```python
import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap

@cocotb.test
async def test_my_kernel(dut):
    test_conf = load_json_binary("./tiny-gpu-assembler/asm_build/test_my_kernel.json")
    data_memory = await setup_wrap(dut, test_conf)

    # Verify results — data_memory.memory is a list of 32-bit words
    for i in range(test_conf["threads"]):
        expected = test_conf["initial_data"][i] + 100
        assert data_memory.memory[i] == expected, \
            f"Thread {i}: expected {expected}, got {data_memory.memory[i]}"
```

### Step 4 — Run it

```bash
make test_<name>
# Example:
make test_my_kernel
```

The Makefile rebuilds `build/gpu.v` from source if any `.sv` file has changed, then runs the cocotb testbench. Check `test/logs/` for the full execution trace.

# Performance Measurement

This section describes how to measure performance for Milestone 1 (RV32IM scalar correctness) and Milestone 2 (single-warp compiler kernels).

## Milestone Performance Results

This table records measured simulation results for each kernel across milestones. Fill in cycle counts from `make test_*` output after each milestone. IPC = (instructions in program × threads) / cycles. Time (s) = cycles × 25 µs (clock period).

| Kernel | Threads | Instructions (total) | M1+M2 Cycles | M1+M2 Time (s) | M1+M2 IPC | M3 Cycles | M3 Time (s) | M3 IPC | M4 Cycles | M4 Time (s) | M4 IPC |
|--------|---------|----------------------|--------------|----------------|-----------|-----------|-------------|--------|-----------|-------------|--------|
| `test_matadd` (8 threads) | 8 | 136 (17×8) | 471 | 0.01178 | 0.29 | | | | | | |
| `test_matadd` (32 threads) | 32 | 544 (17×32) | 1833 | 0.04583 | 0.30 | | | | | | |
| `test_matmul_2x2` | 4 | 124 (31×4) | 1166 | 0.02915 | 0.11 | | | | | | |
| `test_matmul_4x4` | 16 | 496 (31×16) | 3781 | 0.09453 | 0.13 | | | | | | |
| `test_negatives` | 4 | 24 (6×4) | 174 | 0.00435 | 0.14 | | | | | | |

> **M1+M2** = RV32IM scalar correctness + single-warp compiler kernels baseline · **M3** = multi-warp scheduling · **M4** = memory latency hiding
>
> Time (s) = cycles × 0.000025. Replace `—` with values after running `make test_*` and checking `grep "Completed in" test/logs/<test>.log`.

## What to Measure

| Metric | Description |
|--------|-------------|
| **Cycle count** | Total clock cycles from `start` to `done` |
| **Instruction count** | Number of instructions in `program_memory` × thread count |
| **IPC (Instructions Per Cycle)** | `instruction_count / cycles` — higher is better |
| **Memory stall cycles** | Cycles where all warps are waiting on data memory |
| **Throughput** | How many threads complete per cycle |

## How the Testbench Measures Cycles

The CocoTB testbench in `test/helpers/testbench_bin.py` counts cycles automatically.
Every test prints cycle count to stdout when the GPU `done` signal is asserted:

```
finished at cycle <N>
Completed in <N> cycles
```

The clock period is **25 µs** (set in `test/helpers/setup.py`), so wall time = `N × 25 µs`.

## Running Performance Tests

**Prerequisites:** Install [iverilog](https://steveicarus.github.io/iverilog/usage/installation.html), [cocotb](https://docs.cocotb.org/en/stable/install.html), and [sv2v](https://github.com/zachjs/sv2v/releases).

```bash
# Milestone 1 — scalar RV32IM correctness (8 threads)
make test_matadd

# Milestone 2 — single-warp compiler kernels (8 and 32 threads)
make test_matadd    # vector addition, 8 threads
make test_matmul    # matrix multiply, 2×2 and 4×4
```

Each run logs to `test/logs/`. Look for the cycle count at the end of the log.

## Milestone 1: RV32IM Scalar Correctness

**Goal:** Every RV32I + RV32M instruction produces the correct result in a single warp.

**Key test programs:**

| Test | Threads | Instructions | What it verifies |
|------|---------|--------------|------------------|
| `test_matadd_8_threads` | 8 | 17 | ADD, SLLI, LW, SW, CSR reads |
| `test_negatives` | varies | — | SUB, negative immediates, signed arithmetic |
| `test_matmul_2x2` | 4 | — | MUL (RV32M), nested addressing |

**How to compute IPC manually:**

```python
# program_memory word count from the JSON file
import json
with open("tiny-gpu-assembler/asm_src/test_matadd_8_threads.json") as f:
    d = json.load(f)
instr_count = len(d["program_memory"]) * d["threads"]
# IPC = instr_count / cycles_from_sim_output
```

**Expected baseline** (memory_delay=1): matadd 8 threads should complete in ~40–80 cycles depending on warp stall behavior.

## Milestone 2: Single-Warp Compiler Kernels

**Goal:** Assembled kernels (from `tiny-gpu-assembler/asm_src/`) run correctly end-to-end through RTL simulation.

**Key test programs:**

| Test | Threads | Kernel | Output check |
|------|---------|--------|--------------|
| `test_matadd_8_threads` | 8 | C[i] = A[i] + B[i] | C at byte addr 64–95 |
| `test_matadd_32_threads` | 32 | C[i] = A[i] + B[i] | C at byte addr 256–383 |
| `test_matmul_2x2` | 4 | C = A × B (2×2) | C at byte addr 32–47 |
| `test_matmul_4x4` | 16 | C = A × B (4×4) | C at byte addr 128–191 |

**Correctness check** — the testbench `verify_matadd()` asserts that output memory matches the expected result element-by-element. A passing test with no assertion errors = correctness verified.

**Performance goal for M2:** All 4 kernels above pass correctness checks. Cycle counts are recorded as the baseline for future milestones (pipelining, memory coalescing, multi-warp hiding).

## Interpreting Results

```
# Good run output looks like:
finished at cycle 62
Completed in 62 cycles

# Followed by final memory state showing correct output values
```

To compare across runs (e.g. before/after an optimization), redirect logs:

```bash
make test_matadd 2>&1 | tee test/logs/matadd_baseline.txt
grep "Completed in" test/logs/matadd_baseline.txt
```

---

# Future CARP GAR projects 

### Multi-layered Cache & Shared Memory

In modern GPUs, multiple different levels of caches are used to minimize the amount of data that needs to get accessed from global memory. tiny-gpu implements only one cache layer between individual compute units requesting memory and the memory controllers which stores recent cached data.

Implementing multi-layered caches allows frequently accessed data to be cached more locally to where it's being used (with some caches within individual compute cores), minimizing load times for this data.

Different caching algorithms are used to maximize cache-hits - this is a critical dimension that can be improved on to optimize memory access.

Additionally, GPUs often use **shared memory** for threads within the same block to access a single memory space that can be used to share results with other threads.

### Memory Coalescing

Another critical memory optimization used by GPUs is **memory coalescing.** Multiple threads running in parallel often need to access sequential addresses in memory (for example, a group of threads accessing neighboring elements in a matrix) - but each of these memory requests is put in separately.

Memory coalescing is used to analyzing queued memory requests and combine neighboring requests into a single transaction, minimizing time spent on addressing, and making all the requests together.

### Pipelining

In the control flow for tiny-gpu, cores wait for one instruction to be executed on a group of threads before starting execution of the next instruction.

Modern GPUs use **pipelining** to stream execution of multiple sequential instructions at once while ensuring that instructions with dependencies on each other still get executed sequentially.

This helps to maximize resource utilization within cores as resources are not sitting idle while waiting (ex: during async memory requests).


### Branch Divergence

tiny-gpu assumes that all threads in a single batch end up on the same PC after each instruction, meaning that threads can be executed in parallel for their entire lifetime.

In reality, individual threads could diverge from each other and branch to different lines based on their data. With different PCs, these threads would need to split into separate lines of execution, which requires managing diverging threads & paying attention to when threads converge again.

### Synchronization & Barriers

Another core functionality of modern GPUs is the ability to set **barriers** so that groups of threads in a block can synchronize and wait until all other threads in the same block have gotten to a certain point before continuing execution.

This is useful for cases where threads need to exchange shared data with each other so they can ensure that the data has been fully processed.

# Next Steps

- [ ] Add a simple cache for instructions
- [ ] Build an adapter to use GPU with Tiny Tapeout 7
- [ ] Add basic branch divergence
- [ ] Add basic memory coalescing
- [ ] Add basic pipelining
- [ ] Optimize control flow and use of registers to improve cycle time
- [ ] Write a basic graphics kernel or add simple graphics hardware to demonstrate graphics functionality

**Forked from Adam Maj's Tiny GPU, and Cal Poly CARP's GAR**
