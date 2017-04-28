contpar=0
contimpar=0
vetpar=[0]*5
vetimpar=[0]*5

for i in range(15):
	x=int(input())

	if x%2==0:
		if contpar==5:
			contpar=0
			
			for j in range(5):
				print('par[%d] = %d' %(j,vetpar[j]))
				vetpar[j]=False
		
		vetpar[contpar]=x
		contpar+=1

	else:
		if contimpar==5:
			contimpar=0

			for j in range(5):
				print('impar[%d] = %d' %(j,vetimpar[j]))
				vetimpar[j]=False

		vetimpar[contimpar]=x
		contimpar+=1

for i in range(5):
	if(vetimpar[i]):
		print('impar[%d] = %d' %(i,vetimpar[i]))

for i in range(5):
	if(vetpar[i]):
		print('par[%d] = %d' %(i,vetpar[i]))