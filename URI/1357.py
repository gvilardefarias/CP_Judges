d = int(input())

braile = [[[".*"],
		   ["**"],
		   [".."]],[["*."],
		   			[".."],
		   			[".."]],[["*."],
				   			["*."],
				   			[".."]],[["**"],
						   			[".."],
						   			[".."]],[["**"],
								   			[".*"],
								   			[".."]],[["*."],
										   			[".*"],
										   			[".."]],[["**"],
												   			["*."],
												   			[".."]],[["**"],
														   			["**"],
														   			[".."]],[["*."],
																   			["**"],
																   			[".."]],[[".*"],
																		   			["*."],
																		   			[".."]]]

while d!=0:
	a = input()
	if a=='S':
		b = input()
		c = b[:-1]

		for i in c:
			for j in braile[int(i)][0]:
				print (j, end='')
			print (end=' ')

		for j in braile[int(b[d-1])][0]:
				print (j, end='')
		print()

		for i in c:
			for j in braile[int(i)][1]:
				print (j, end='')
			print (end=' ')
		for j in braile[int(b[d-1])][1]:
				print (j, end='')
		print()

		cont=1
		for i in range((len(b)*2)+(len(b))-1):
			if cont%3==0:
				print(end=' ')
			else:
				print('.',end='')
			cont+=1
		print()
	else:
		aux = []
		for i in range(2):
			b = input()
			aux.append(b.split())
		b = input()

		for i in range(d):
			if aux[0][i][0]=='*' and aux[0][i][1]=='.' and aux[1][i][0]=='.' and aux[1][i][1]=='.':
				print(1,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='.' and aux[1][i][0]=='*' and aux[1][i][1]=='.':
				print(2,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='*' and aux[1][i][0]=='.' and aux[1][i][1]=='.':
				print(3,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='*' and aux[1][i][0]=='.' and aux[1][i][1]=='*':
				print(4,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='.' and aux[1][i][0]=='.' and aux[1][i][1]=='*':
				print(5,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='*' and aux[1][i][0]=='*' and aux[1][i][1]=='.':
				print(6,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='*' and aux[1][i][0]=='*' and aux[1][i][1]=='*':
				print(7,end='')

			elif  aux[0][i][0]=='*' and aux[0][i][1]=='.' and aux[1][i][0]=='*' and aux[1][i][1]=='*':
				print(8,end='')

			elif  aux[0][i][0]=='.' and aux[0][i][1]=='*' and aux[1][i][0]=='*' and aux[1][i][1]=='.':
				print(9,end='')

			elif  aux[0][i][0]=='.' and aux[0][i][1]=='*' and aux[1][i][0]=='*' and aux[1][i][1]=='*':
				print(0,end='')

		print()

	d = int(input())