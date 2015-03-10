while True:
    n = int(input())
    if n == 0: break
    w, h = map(int, input().split())
    trees = [[0 for i in range(h+1)] for j in range(w+1)]
    dis = [[0 for i in range(h+1)] for j in range(w+1)]
    for i in range(n):
        x, y = map(int, input().split())
        trees[x][y] = 1

    for i in range(1, w+1):
        for j in range(1, h+1):
            dis[i][j] = trees[i][j] + dis[i-1][j] \
                    + dis[i][j-1] - dis[i-1][j-1]

    s, t = map(int, input().split())

    ans = 0
    for i in range(1, w - s + 2):
        for j in range(1, h - t + 2):
            num = dis[i+s-1][j+t-1] - dis[i+s-1][j-1] \
                    - dis[i-1][j+t-1] + dis[i-1][j-1]
            ans = max(ans, num)

    print(ans)


