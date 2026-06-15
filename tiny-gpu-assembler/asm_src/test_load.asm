; Load/double/store test: each thread loads data[threadId], doubles it,
; stores to data[threadId + numThreads].  Repeats for 4 iterations.
; Initial data at byte 0..12 (4 words), output at byte 16..28.
.threads 4
.data 1 2 3 4

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = i

slli  t0, a0, 2           ; base load addr = i * 4

li    t1, 0               ; iteration counter
li    t2, 4               ; max iterations

LOOP:
  lw    t3, 0(t0)         ; load current value
  add   t3, t3, t3        ; double it

  addi  t4, t0, 16        ; store addr = load addr + 16 bytes (4 words ahead)
  sw    t3, 0(t4)

  addi  t0, t0, 16        ; advance load addr by 4 words
  addi  t1, t1, 1         ; i++
  blt   t1, t2, LOOP

ebreak
