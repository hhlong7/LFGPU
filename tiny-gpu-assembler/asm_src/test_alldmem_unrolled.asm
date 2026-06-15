; Unrolled memory write test: each thread writes 4 consecutive words
; using explicit (unrolled) stores instead of a loop.
.threads 8

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = global thread id

; base address = thread_id * 16 bytes (4 words per thread)
li    t0, 16
mul   t0, a0, t0

sw    a0, 0(t0)           ; word 0
sw    a0, 4(t0)           ; word 1
sw    a0, 8(t0)           ; word 2
sw    a0, 12(t0)          ; word 3

ebreak
