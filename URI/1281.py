c=int(input())

for c1 in range(c):
	c2=int(input())
	s=0.0
	d={}

	for i in range(c2):
		a=input()
		a=a.split(' ')

		d[str(a[0])]=float(a[1])

	c2=int(input())

	for i in range(c2):
		a=input()
		a=a.split(' ')
		s+=d[str(a[0])]*float(a[1])

	print('R$ %.2f' %(s))