; Memory stress test (64-word coverage): 8 threads write to 64 locations.
; Each thread writes its thread id to 8 consecutive word addresses.
.threads 8

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = global thread id

; base address = thread_id * 8 words = thread_id * 32 bytes
li    t0, 32
mul   t0, a0, t0          ; t0 = base byte address

li    t1, 0               ; loop counter
li    t2, 8               ; 8 iterations per thread

LOOP:
  sw    a0, 0(t0)         ; write thread_id to current address
  addi  t0, t0, 4         ; advance by one word
  addi  t1, t1, 1
  blt   t1, t2, LOOP

ebreak
