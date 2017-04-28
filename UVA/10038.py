while True:
	try:
		x = input()
		aux = x.split()
		c = int(aux[0])
		aux = aux[1:]
		y = set()
		ok = True

		for i in range(len(aux)-1):
			y.add(abs(int(aux[i])-int(aux[i+1])))

		for i in range(1,c):	
			if not i in y:
				ok = False
				break
		if ok:
			print('Jolly')
		else:
			print('Not jolly')

	except:
		break