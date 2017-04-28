x = input().split()
d = {}
orde = []

for i in x:
	if not i in orde:
		orde.append(i)
	try:
		d[i] += 1
	except:
		d[i] = 1

for i in orde:
	print(i + ' ' + str(d[i]))