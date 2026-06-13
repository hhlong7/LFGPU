; Negative number test: compute 0 - 3 = -3 and store to memory[0].
.threads 4
.data 0 0 0 0

li    t0, 5               ; positive value
li    t1, 3               ; positive value
sub   t1, x0, t1          ; t1 = 0 - 3 = -3

li    t2, 0               ; base address
sw    t1, 0(t2)           ; store -3 at memory[0]

ebreak
