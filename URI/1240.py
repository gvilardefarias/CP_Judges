c=int(input())

for i in range(c):
	a=input()
	a=a.split(' ')

	q=0
	x=len(a[0])
	y=len(a[1])
	z=True

	if y>x:
		print('nao encaixa')
		q=1
	else:
		aux=x-y
		j=0

		b=str(a[1])
		a=str(a[0])

		for i in range(aux,x):
			try:
				if a[i]==b[j] and z:
					z=True
				else:
					z=False
			except:
				z=False
				break
			j+=1
	if q==0:
		if z:
			print('encaixa')
		else:
			print('nao encaixa')