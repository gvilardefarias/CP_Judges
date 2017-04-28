listas = {}

def permute(n,c,j):
	global listas
	if c<1:
		return j

	for i in range(n):
		if not str(i) in j:
			a = permute(n,c-1,j+str(i))
			if a!=None:
				listas[n].append([int(i) for i in a])

n,m = input().split()
m = int(m)
n = int(n)

ja = [False]*10

while n!=0 or m!=0:	
	if not ja[n]:
		ja[n] = True
		listas[n] = []
		permute(n,n,'')

	if m>0:
		regras = []
		cont = 0

		for i in range(m):
			regras.append(input().split())

		for i in listas[n]:
			go = False
			for j in regras:
				a,b,c = int(j[0]),int(j[1]),int(j[2])

				if c<0:
					c *= -1
					if abs(i.index(a)-i.index(b))>=c:				
						go = True
					else:
						go = False
						break
				else:
					if abs(i.index(a)-i.index(b))<=c:
						go = True
					else:
						go = False
						break
			if go:
				cont += 1

		print(cont)
	else:
		print(len(listas[n]))

	n,m = input().split()
	m = int(m)
	n = int(n)