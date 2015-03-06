#!/usr/bin/python3

while True:
    n, r = list(map(int, input().split()))
    if n == 0 and r == 0 : break
    
    deck = list(range(n, 0, -1))
    for i in range(r):
        p, c = list(map(int, input().split()))
        p -= 1
        p_cards = deck[:p]
        c_cards = deck[p:p+c]
        remain = deck[p+c:]
        deck = c_cards + p_cards + remain
    print(deck[0])
