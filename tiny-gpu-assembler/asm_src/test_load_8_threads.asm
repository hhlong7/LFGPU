; Load/double/store test: 8 threads, each loads data[i], doubles, stores ahead.
; Initial data at byte 0..28, output at byte 32..60.
.threads 8
.data 1 2 3 4 5 6 7 8

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = i

slli  t0, a0, 2           ; load addr = i * 4

li    t1, 0               ; iteration counter
li    t2, 4               ; max iterations

LOOP:
  lw    t3, 0(t0)
  add   t3, t3, t3        ; double

  addi  t4, t0, 32        ; store 8 words (32 bytes) ahead
  sw    t3, 0(t4)

  addi  t0, t0, 32        ; advance load addr
  addi  t1, t1, 1
  blt   t1, t2, LOOP

ebreak
