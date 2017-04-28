n = int(input())

x = {}

y = {}
cont = 0

for i in range(n):
	xA,yA = input().split()

	try:
		x[xA] += 1
		cont += x[xA]-1
	except:
		x[xA] = 1

	try:
		y[yA] += 1
		cont += y[yA]-1
	except:
		y[yA] = 1

print(x)
print(y)
print(str(cont))