t = input()

for c in range(int(t)):
	matriz = []
	n = int(input())

	for i in range(n):
		aux = [int(elem) for elem in list(input())]
		matriz.append(aux)

	m = int(input())

	for k in range(m):
		com = input()

		if com == 'transpose':
			for i in range(n):
				for j in range(i,n):
					aux = matriz[i][j]
					matriz[i][j] = matriz[j][i]
					matriz[j][i] = aux
		elif com == 'inc':
			for i in range(n):
				for j in range(n):
					matriz[i][j]+=1
					if matriz[i][j]==10:
						matriz[i][j]=0
		elif com == 'dec':
			for i in range(n):
				for j in range(n):
					matriz[i][j]-=1
					if matriz[i][j]==-1:
						matriz[i][j]=9
		elif 'row' in com:
			aux = com.split()
			a = int(aux[1]) - 1
			b = int(aux[2]) - 1

			for i in range(n):
				aux = matriz[a][i]
				matriz[a][i] = matriz[b][i]
				matriz[b][i] = aux
		else:
			aux = com.split()
			a = int(aux[1]) - 1
			b = int(aux[2]) - 1

			for i in range(n):
				aux = matriz[i][a]
				matriz[i][a] = matriz[i][b]
				matriz[i][b] = aux

	print('Case #' + str(c+1))
	for i in matriz:
		for j in i:
			print(j, end='')
		print()
	print()