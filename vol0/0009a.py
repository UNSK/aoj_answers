import math

ans = []
while True:
	try:
		n = int(raw_input())
		if n < 2:
			ans.append(0)
			continue
		prime_list = range(3, n + 1, 2)
		prime_list.insert(0, 2)
		head = prime_list[0]
		i = 0
		while head < math.sqrt(n):
			for j in range(len(prime_list) - 1, 0, -1):
				if (prime_list[j] % head == 0) & (prime_list[j] != head):
					del prime_list[j]
			i += 1
			head = prime_list[i]
		ans.append(len(prime_list))
	except EOFError:
		break
for num in ans:
	print num