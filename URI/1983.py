x = int(input())

nota = {}

for i in range(x):
	y = input()
	y = y.split(' ')
	nota[y[0]] = float(y[1])

maior = 0.0

for i in nota:
	if nota[i] > maior:
		maior = nota[i]
		matricula = i

if maior >= 8:
	print(matricula)
else:
	print('Minimum note not reached')