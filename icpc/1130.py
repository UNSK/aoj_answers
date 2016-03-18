def search(x, y, m):
    if x < 0 or y < 0 \
            or x >= len(m[0]) or y >= len(m):
        return 0
    if m[y][x] == '#':
        return 0
    m[y][x] = '#'
    return 1 + search(x+1,y, m) + search(x-1,y,m) \
            + search(x,y+1,m) + search(x,y-1,m)

while True:
    w, h = map(int, input().split())
    if w == 0: break
    room = []
    for i in range(h):
        tmp = list(input())
        room.append(tmp[:w])
        if '@' in tmp:
            y = i
            x = tmp.index('@') 
    print(search(x, y, room))
