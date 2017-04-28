while True:
	try:
		x = input()
		x = x.split(' ')

		num = 0

		for i in x[1]:
			num += int(i)

		print(num,end='')

		if(num%3==0):
			print(' sim')
		else:
			print(' nao')
	except:
		pass