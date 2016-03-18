while True:
    w, h = map(int, input().split())
    if w == 0: break
    goal = (w,h)
    vart = []
    hori = []
    for i in range(2*h-1):
        if i % 2 == 0:
            vart.append(list(map(int, input().split())))
        else:
            hori.append(list(map(int, input().split())))
    node = [[0 for i in range(h)] for i in range(w)]
    queue = [(0,0)]
    while queue:
        p = queue.pop(0)
        x, y = p[0], p[1]
        node[x][y] += 1
        if y-1 >= 0 and hori[y-1][x] == 0 and node[x][y-1] == 0:
            node[x][y-1] = node[x][y]
            queue.append((x,y-1))
        if y+1 < h and hori[y][x] == 0 and node[x][y+1] == 0:
            node[x][y+1] = node[x][y]
            queue.append((x,y+1))
        if x-1 >= 0 and vart[y][x-1] == 0 and node[x-1][y] == 0:
            node[x-1][y] = node[x][y]
            queue.append((x-1,y))
        if x+1 < w and vart[y][x] == 0 and node[x+1][y] == 0:
            node[x+1][y] = node[x][y]
            queue.append((x+1,y))
    print(node[goal[0]-1][goal[1]-1])
