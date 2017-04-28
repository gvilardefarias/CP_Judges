p=int(input())

total=0.0

for i in range(p):
	x=input()
	x=x.split(' ')

	if int(x[0])==1001:
		total+=1.5*int(x[1])
	elif int(x[0])==1002:
		total+=2.5*int(x[1])
	elif int(x[0])==1003:
		total+=3.5*int(x[1])
	elif int(x[0])==1004:
		total+=4.5*int(x[1])
	elif int(x[0])==1005:
		total+=5.5*int(x[1])

print('%.2f' %(total))