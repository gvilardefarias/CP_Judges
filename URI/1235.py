c=int(input())

for i in range(c):
	s=input()
	k=len(s)
	l=int(len(s)-1)
	j=int((k/2)-1)
	
	while j>=0:
		print(s[j],end='')
		j=j-1
	
	o=int(l/2)
	
	while l>o:
		print(s[l],end='')
		l=l-1
	
	print()