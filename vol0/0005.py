gcd, lcm = [], []
while True:
	try:
		a, b = map(int, raw_input().split())
		if a > b:
			m, n = a, b
		else:
			m, n = b, a		

		while n != 0:
			m, n = n, m % n 
		gcd.append(m)
		lcm.append(a * b / m)
	except EOFError:
		break

for gcd, lcm in zip(gcd, lcm):
	print '%d %d' % (gcd, lcm)



