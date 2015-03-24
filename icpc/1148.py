while True:
    n, m = map(int, input().split())
    if n == 0: break
    r = int(input())
    records = []
    for i in range(r):
        records.append(list(map(int, input().split())))
    q = int(input())
    queries = []
    for i in range(q):
        queries.append(list(map(int, input().split())))
    #print(records,queries)
    for q in queries:
        st = q[2]
        rs = list(filter(lambda x: x[2] == st, records))
        pcs = [[0,0] for i in range(n)]
        ls = []
        for r in rs:
            pcs[r[1]-1][r[3]] = r[0]
            if r[3] == 0:
                ls.append(pcs[r[1]-1])
                pcs[r[1]-1] = [0,0]
        if not ls: 
            print(0)
            continue
        ls.sort(key=lambda x:x[1])
        uses = []
        start, end = ls[0][1], ls[0][0]
        for v in ls[1:]:
            if v[0] < end: # subset
                continue
            elif v[1] <= end:
                end = v[0]
            elif v[1] > end:
                uses.append((start,end))
                start, end = v[1], v[0]
        uses.append((start,end))
        ans = 0
        for u in uses:
            for i in range(u[0], u[1]):
                if i >= q[0] and i < q[1]:
                    ans += 1
        print(ans)
