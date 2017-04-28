o=input()
x=[]
s=0

for i in range(12):
	aux=[]
	for j in range(12):
		a=float(input())
		aux.append(a)
	x.append(aux)

for i in range(6):
	for j in range(12):
		if j>11-i:
			s+=x[i][j]

for i in range(6,12):
	for j in range(12):
		if j-i>0:
			s+=x[i][j]

if o=='S':
	print('%.1f' %(s))
else:
	print('%.1f' %(s/30))