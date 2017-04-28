n=input()
n=n.split(' ')
grafo={}
lista=[]
visitado=[]
convidado=[]
grau={}
 
for i in range(int(n[0])):
	s=input()
	s=s.split(' ')
 
	try:
		grafo[s[0]].append(s[1])
	except:
		grafo[s[0]]=[]
		grafo[s[0]].append(s[1])
	try:
		grafo[s[1]].append(s[0])
	except:
		grafo[s[1]]=[]
		grafo[s[1]].append(s[0])

for i in grafo:
	grau[i] = False

lista.append('Rerisson')

while len(lista)>0:
	x = lista.pop(0)

	for i in grafo[x]:
		if not(i in visitado):
			lista.append(i)
			visitado.append(i)

		if grau[i]>grau[x]+1 or grau[x]==False or grau[i]==False:
			if grau[i]==False:
				grau[i]=0
			if grau[x]==False:
				grau[x]=0
			grau[i]=grau[x]+1

for i in grau:
	if grau[i]<=int(n[1]) and i!='Rerisson':
		convidado.append(i)

convidado.sort()
 
print(len(convidado))
 
for i in convidado:
	print(i)