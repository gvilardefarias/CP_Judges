a=input()
a=a.split(' ')
n=int(a[0])
m=int(a[1])

while n!=0 and m!=0:
	x=n+m
	x=str(x)
	x=x.replace('0','')
	
	print(x)
	
	a=input()
	a=a.split(' ')
	n=int(a[0])
	m=int(a[1])