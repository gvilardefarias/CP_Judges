b = input().split()
c = 0

while len(b)>1:
	if c==1:
		print()

	a = []

	for i in range(1,len(b)):
		a.append(int(b[i]))

	a.sort()

	tam = len(a)
	resp = []

	for i in range(tam):
		for j in range(i+1,tam):
			for k in range(j+1,tam):
				for l in range(k+1,tam):
					for m in range(l+1,tam):
						for n in range(m+1,tam):
							aux = []
							aux.append(a[i])
							aux.append(a[j])
							aux.append(a[k])
							aux.append(a[l])
							aux.append(a[m])
							aux.append(a[n])
							resp.append(aux)

	for i in resp:
		for j in range(len(i)-1):
			print(i[j], end=' ')
		print(i[-1])

	c=1

	b = input().split()