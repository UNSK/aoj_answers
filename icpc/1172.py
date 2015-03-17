from math import sqrt

size = 123456
primes = [x for x in range(2, 2*size+1) if x == 2 or x % 2 == 1]
for i in range(2, int(sqrt(2*size))):
    primes = [x for x in primes if x % i != 0 or x == i]

while True:
    n = int(input())
    if n == 0: break
    nums = [x for x in primes if x > n and x <= 2*n]
    print(len(nums))
