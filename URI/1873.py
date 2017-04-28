c=int(input())

for i in range(c):
	x=input()
	x=x.split(' ')

	if x[0]==x[1]:
		print('empate')
	
	elif x[0]=='tesoura' and x[1]=='papel':
		print('rajesh')

	elif x[0]=='papel' and x[1]=='pedra':
		print('rajesh')

	elif x[0]=='pedra' and x[1]=='lagarto':
		print('rajesh')

	elif x[0]=='lagarto' and x[1]=='spock':
		print('rajesh')

	elif x[0]=='spock' and x[1]=='tesoura':
		print('rajesh')

	elif x[0]=='tesoura' and x[1]=='lagarto':
		print('rajesh')

	elif x[0]=='lagarto' and x[1]=='papel':
		print('rajesh')

	elif x[0]=='papel' and x[1]=='spock':
		print('rajesh')

	elif x[0]=='spock' and x[1]=='pedra':
		print('rajesh')

	elif x[0]=='pedra' and x[1]=='tesoura':
		print('rajesh')

	else:
		print('sheldon')