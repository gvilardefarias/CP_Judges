def dife(x):
	a = {}
	
	for i in x:
		a[i] = 1

	if len(x)==len(a):
		return True
	return False

n = int(input())
ja = [False]*100

cima = {}
baixo = {}
c=0

while n!=0:
	if c!=0:
		print()

	if not ja[n]:
		cima[n] = []
		baixo[n] = []
		for i in range(1234,int(100000/n)+1):
			x = i*n

			if x%i==0 and x/i==n and x>=1234 and x<100000 and not (i<10000 and x<10000):
				if i<10000:
					if dife(str(x)+str(i) + '0'):
						ja[n] = True
						cima[n].append(x)
						baixo[n].append(i)
				elif dife(str(x)+str(i)):
						ja[n] = True
						cima[n].append(x)
						baixo[n].append(i)

	if len(cima[n])==0:
		print('There are no solutions for ' + str(n) + '.')
	else:
		for i in range(len(cima[n])):
			num1 = str(cima[n][i])
			num2 = str(baixo[n][i])

			if len(num1)<5:
				num1 = '0' + num1
			if len(num2)<5:
				num2 = '0' + num2

			print(num1 + ' / ' + num2 + ' = ' + str(n))
	n = int(input())
	c = 1