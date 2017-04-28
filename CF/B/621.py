x = input()
bispos = []
cont = 0

for i in range(x):
	aux = raw_input().split(' ')
	bispos.append([int(aux[0]), int(aux[1])])

for i in range(x-1):
	for j in range(i+1,x):
		a = bispos[i][0] - bispos[j][0]
		b = bispos[i][1] - bispos[j][1]

		if a == b or a*-1==b or b*-1==a:
			cont += 1
print cont