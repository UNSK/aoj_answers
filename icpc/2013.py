def time_to_i(s):
    tt = list(map(int, s.split(':')))
    return tt[0] * 3600 + tt[1] * 60 + tt[2]

while True:
    n = int(input())
    if n == 0: break
    tmp = []
    for i in range(n):
        tmp.append(input().split())
    table = []
    for t in tmp:
        table.append((time_to_i(t[0]), 1)) # 1: departure, 0: arrival
        table.append((time_to_i(t[1]), 0))
    table.sort(key=lambda x:(x[0], x[1]))
    trains = 1
    for t in table:
        if t[1] == 1:
            if trains > 0:
                trains -= 1
        else:
            trains += 1
    print(trains)
