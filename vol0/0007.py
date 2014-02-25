debt = 100000
for i in range(0, input()):
	debt *= 1.05
	debt /= 1000
	if (debt - int(debt) != 0.0):
		debt += 1
	debt = int(debt) * 1000
print debt