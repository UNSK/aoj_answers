n = int(input())
for i in range(n):
    y,m,d = map(int, input().split())
    dif = 999 - y
    leap = int(dif / 3) + 1
    common = dif - leap + 1
    days = leap * 200 + common * 195 # days from y 1 1
    days -= (m - 1) * 20
    if y % 3 != 0:
        days += int((m - 1) / 2)
    days -= (d - 1)
    print(days)
