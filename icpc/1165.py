while True:
    n = int(input())
    if n == 0: break
    squares = [(0,0)]
    x_max, x_min, y_max, y_min = 0, 0, 0, 0
    for i in range(1,n):
        p, d = map(int, input().split())
        x, y = squares[p]
        if d == 0:
            x -= 1
        elif d == 1:
            y -= 1
        elif d == 2:
            x += 1
        elif d == 3:
            y += 1
        squares.append((x,y))
        x_max = max(x_max, x)
        x_min = min(x_min, x)
        y_max = max(y_max, y)
        y_min = min(y_min, y)
    print(x_max - x_min + 1, y_max - y_min + 1)


