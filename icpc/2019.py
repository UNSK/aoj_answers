while True:
    n, m = map(int, input().split())
    ex = [0] * 11
    if n == 0: break
    for i in range(n):
        d, p = map(int, input().split())
        ex[p] += d
    ex.reverse()
    for i in range(len(ex)):
        m -= ex[i]
        if m <= 0:
            ex[i] = abs(m)
            break
        else:
            ex[i] = 0
    ex.reverse()
    ans = 0
    for i in range(len(ex)):
        ans += ex[i] * i
    print(ans)
