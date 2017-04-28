a = int(input())

qC = {}
palavra = '' 

for i in range(a):
	b = input()
	b = b.split()

	b[0] = int(b[0])
	b[2] = int(b[2])

	try:
		qC[b[0]].append(b)
	except:
		qC[b[0]] = []
		qC[b[0]].append(b)
	try:
		qC[b[2]].append(b)
	except:
		qC[b[2]] = []
		qC[b[2]].append(b)

c = [0,'']

while c[0]!=1:
	if qC[c[0]][0][1] != c[1]:
		palavra += qC[c[0]][0][1]
		c = [qC[c[0]][0][2], qC[c[0]][0][1]]
	elif qC[c[0]][1][1] != c[1]:
		palavra += qC[c[0]][1][1]
		c = [qC[c[0]][1][2], qC[c[0]][1][1]]

print(palavra)