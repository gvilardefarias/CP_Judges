letras = 'abcdefghijklmnopqrstuvwxyz'

n = int(input())
text = []
tamanhos = []

for i in range(n):
	aux = input()

	text.append(aux)

resp = 0
for i in range(26):
	for j in range(i+1,26):
		cont = 0
		
		for k in text:
			c = k.count(letras[i]) + k.count(letras[j])

			if c==len(k):
				cont += c

		if cont>resp:
			resp = cont

print(resp) 