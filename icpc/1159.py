#!/usr/bin/python3

while True:
    n, p = list(map(int, input().split()))
    if n == 0 and p == 0: break

    candidates = [0] * n
    pebbles = p
    i = 0
    while True:
        #print(pebbles," ",candidates)

        if pebbles == 0:
            pebbles = candidates[i]
            candidates[i] = 0
        else:
            pebbles -= 1
            candidates[i] += 1
            if candidates[i] == p:
                break

        i += 1
        if i == n: 
            i = 0
    print(i)
