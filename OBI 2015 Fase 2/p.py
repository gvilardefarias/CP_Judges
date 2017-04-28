x = input()

cont = 0

for i in x:
	if cont%2!=0:
		print(i,end='')
	if i!=' ':
		cont+=1
	else:
		print(i,end='')

print()