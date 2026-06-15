import cocotb
from .helpers.testbench_bin import load_json_binary, setup_wrap


@cocotb.test
async def test_alldmem_basic(dut):
    await test_dmem(
        dut, "./tiny-gpu-assembler/asm_build/test_alldmem.json")


@cocotb.test
async def test_alldmem_unrolled(dut):
    await test_dmem(
        dut, "./tiny-gpu-assembler/asm_build/test_alldmem_unrolled.json")


@cocotb.test
async def test_alldmem_64(dut):
    await test_dmem(
        dut, "./tiny-gpu-assembler/asm_build/test_alldmem_64.json")


@cocotb.test
async def test_alldmem_hash(dut):
    test_conf = load_json_binary(
        "./tiny-gpu-assembler/asm_build/test_alldmem_hash.json"
    )

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    expected = {}
    for thread_id in range(test_conf["threads"]):
        for k in range(8):
            expected[thread_id + k] = thread_id ^ k

    verify_memory(data_memory, expected)


async def test_dmem(dut, json):

    test_conf = load_json_binary(json)

    # run device and dump memory
    data_memory = await setup_wrap(dut, test_conf)

    testname = test_conf["testname"]
    threads = test_conf["threads"]

    expected = {}
    if testname == "test_alldmem":
        for thread_id in range(1, threads):
            expected[64 + ((thread_id - 1) * 2)] = thread_id
    elif testname == "test_alldmem_unrolled":
        for thread_id in range(threads):
            for offset in range(4):
                expected[(thread_id * 4) + offset] = thread_id
    elif testname == "test_alldmem_64":
        for thread_id in range(threads):
            for offset in range(8):
                expected[(thread_id * 8) + offset] = thread_id
    else:
        raise ValueError(f"No expected memory pattern for {testname}")

    verify_memory(data_memory, expected)


def verify_memory(data_memory, expected):
    for i, actual in enumerate(data_memory.memory):
        want = expected.get(i, 0)
        assert actual == want, f"Result mismatch at index {i}: expected {want}, got {actual}"
