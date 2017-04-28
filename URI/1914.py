qt=int(input())

for i in range(qt):
	a=input()	
	a=a.split(' ')

	x=input()
	x=x.split(' ')

	n=int(x[0])+int(x[1])

	if n%2==0:
		aux='PAR'
	else:
		aux='IMPAR'

	if a[1]==aux:
		print(a[0])
	else:
		print(a[2])