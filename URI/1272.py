c=int(input())

for i in range(c):
	st=input()
	st=st.split(' ')
	
	for j in range(len(st)):
		a=str(st[j])
		
		if a!='':
			print(a[0],end='')
	print()