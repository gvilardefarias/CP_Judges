c=int(input())

def sort(v):
	if len(v)<=1:
		return v

	maior,menor,igual=[],[],[]

	pivot=len(v[0])

	for x in v:
		if len(x)<pivot:
			menor.append(x)
		elif len(x) == pivot:
			igual.append(x)
		else:
			maior.append(x)

	return sort(menor) + igual + sort(maior)

for i in range(c):
	x=input()
	x=x.split(' ')

	sort(x)

	for j in x:
		print(j,end=' ')