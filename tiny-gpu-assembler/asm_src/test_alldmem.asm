; Memory stress test: 8 threads each write a gradient pattern.
; Thread i writes value (i * stride) to consecutive locations using nested loops.
.threads 8

csrr  a0, 0xCC1
csrr  a1, 0xCC2
mul   a0, a0, a1
csrr  a1, 0xCC0
add   a0, a0, a1          ; a0 = global thread id

li    a2, 8               ; stride (bytes between write locations)
mul   t0, a0, a2          ; base write address = thread_id * stride

li    t1, 0               ; outer loop counter
li    t2, 8               ; outer loop limit

OUTER:
  li    t3, 0             ; inner loop counter
  li    t4, 4             ; inner loop limit

  INNER:
    sw    a0, 0(t0)       ; store thread id at current address
    add   t0, t0, a2      ; advance address by stride
    addi  t3, t3, 1
    blt   t3, t4, INNER

  addi  t1, t1, 1
  blt   t1, t2, OUTER

ebreak
