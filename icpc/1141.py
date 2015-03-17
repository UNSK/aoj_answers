from math import sqrt
from array import array

size = 10000000
s = array('i', range(size+1))
s[1] = 0
sqrtn = int(round(size**0.5))
for i in range(2, sqrtn + 1):
    if s[i]:
        s[i*i: size+1 : i] = array('i', [0] * len(range(i*i, size+1, i)))
primes = list(filter(None, s))

while True:
    a, d, n = map(int, input().split())
    if a == 0: break

    ans = 0
    for p in primes:
        if p-a < 0 : continue
        if (p-a) % d == 0:
            ans = p
            n -= 1
        if n == 0:
            break
    print(ans)
