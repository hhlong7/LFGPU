; Hash-pattern memory test: each thread writes a simple hash of (thread_id XOR addr)
; to a set of memory locations.
.threads 8

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = global thread id

li    t0, 4
mul   t0, a0, t0          ; base address = thread_id * 4

li    t1, 0               ; loop counter
li    t2, 8               ; iterations

LOOP:
  xor   t3, a0, t1        ; hash = thread_id XOR k
  slli  t4, t1, 2
  add   t4, t0, t4        ; addr = base + k * 4
  sw    t3, 0(t4)
  addi  t1, t1, 1
  blt   t1, t2, LOOP

ebreak
