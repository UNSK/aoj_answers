n = int(input())
ids = []
for i in range(n):
    ids.append(input())

m = int(input())
num = 0
for i in range(m):
    act = input()
    if act in ids:
        print("Opened by" if num % 2 == 0 else "Closed by", act)
        num += 1
    else:
        print("Unknown", act)
