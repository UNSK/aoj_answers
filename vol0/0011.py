list = range(1, input() + 1)
for i in range(input()):
    a, b = map(int, raw_input().split(','))
    a -= 1
    b -= 1
    list[a], list[b] = list[b], list[a]
for i in list:
    print i
