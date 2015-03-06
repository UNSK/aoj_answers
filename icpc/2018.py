from math import floor

while True:
    n,m,p = map(int, input().split())
    if n == 0 :  break
    x = []
    for i in range(n):
        x.append(int(input()))
    pool = sum(x) * (100 - p)
    div = floor(pool / x[m - 1]) if x[m - 1] != 0 else 0
    print(div)
