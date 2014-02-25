import math

ans = []
while True:
	try:
		n = int(raw_input())
		isPrime = [-1] * (n + 1)
		isPrime[0], isPrime[1] = False, False
		i = 2
		while i * i <= n:
			j = 2
			while j * i <= n:
			#for j in range(i, n+1 ,i):
				#print "%d,"%(j),
				isPrime[j * i] = False
				j += 1

			isPrime[i] = True
			i = isPrime.index(-1)
		ans.append(isPrime.count(True) + isPrime.count(-1))
	except EOFError:
		break
for num in ans:
	print num