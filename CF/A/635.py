r,c,n,p = map(int,input().split())
resp = 0
m = []

for i in range(r):
	aux = []
	for j in range(c):
		aux.append(False)
	m.append(aux[:])


for i in range(n):
	x,y = map(int,input().split())

	m[x-1][y-1] = True

for i in range(r):
	for j in range(c):
		for a in range(r,i,-1):
			for b in range(c,j,-1):				
				cont = 0
				for k in range(i,a):
					for l in range(j,b):
						if m[k][l]:
							cont += 1		
				if cont>=p:
					resp += 1

print(resp)