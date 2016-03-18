while True:
    n, q = map(int, input().split())
    if n == 0: break
    ls = []
    for i in range(n):
        ls.append(list(map(int, input().split())))

    max_q = 0
    date = 0
    for i in range(1, 101):
        count = 0
        for j in range(len(ls)):
            if i in ls[j][1:]:
                count += 1
                if count > max_q:
                    max_q = count
                    date = i
    if max_q < q:
        print(0)
    else:
        print(date)
