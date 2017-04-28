from ctypes import c_longlong as ll

n = int(input())

for i in range(n):
	a = int(input())
	b = 2015 - a

	if b<0:
		print(str((b*-1)+1) + ' A.C.')
	elif b>0:
		print(str(b) + ' D.C.')
	else:
		print('1 A.C.')