def tax(a, t):
    return int(a * (100 + t) / 100)

def tax_sum(a, b, t):
    return tax(a, t) + tax(b, t)

while True:
    x, y, s = map(int, input().split())
    if x == 0:
        break
    ans = 0
    for i in range(1,s):
        for j in range(i,s):
            if tax_sum(i,j,x) == s:
                ans = max(ans, tax_sum(i,j,y))
    print(ans)
