x = input() + '\r'
palavra = ''

for i in range(len(x)-1,-1,-1):
	palavra += x[i]

print(palavra.replace(' ','') + '\r')