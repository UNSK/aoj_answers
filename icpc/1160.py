m = []

def walk(i,j):
    stack = []
    stack.append((i,j))
    while stack:
        p = stack.pop()
        pi = p[0]
        pj = p[1]
        m[pi][pj] = 0
        for k in range(-1,2):
            for l in range(-1,2):
                a = pi+k
                b = pj+l
                if a < 0 or b < 0 \
                        or a >= len(m) or b >= len(m[a]):
                            pass
                elif m[a][b] == 0:
                    pass
                else:
                    stack.append((a,b))

while True:
    w, h = map(int, input().split())
    if w == 0: break
    for i in range(h):
        m.append(list(map(int, input().split())))
    ans = 0
    for i in range(len(m)):
        for j in range(len(m[i])):
            if m[i][j] == 1:
                walk(i,j)
                ans += 1
    print(ans)
    m = []
