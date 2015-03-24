while True:
    n, m, a = map(int, input().split())
    if n == 0: break
    ls = [[0 for i in range(n+1)] for i in range(1001)]
    for i in range(m):
        h, p, q = map(int, input().split())
        ls[h][p] = 1
    ls.reverse()
    for t in ls:
        if t[a] == 1:
            a += 1
        elif t[a-1] == 1:
            a -= 1
    print(a)
