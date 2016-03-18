#!/usr/bin/python3

while True:
    n = int(input())
    if n == 0 : break

    gems = []
    for i in range(n):
        gem = tuple(map(int, input().split()))
        gems.append(gem)
    
    m = int(input())
    bot = [10, 10]
    history = [(10, 10)]
    for j in range(m):
        move = list(input().split())
        move[1] = int(move[1])
        if move[0] == 'N':
            index = 1 #y
            direc = 1 # pos
        elif move[0] == 'S':
            index = 1
            direc = -1 # neg
        elif move[0] == 'E':
            index = 0 #x
            direc = 1
        else: #W
            index = 0
            direc = -1
        for j in range(abs(move[1])):
            bot[index] += direc
            history.append(tuple(bot))
    f = True
    for g in gems:
        if g not in history:
            f = False
            break
    print("Yes" if f else "No")
