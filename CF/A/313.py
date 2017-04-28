x = input()
x = str(x)

a = x[:len(x)-1]
b = x[:len(x)-2] + x[-1]

a = int(a)
b = int(b)
x = int(x)

if a>=b and a>=x:
	print a
elif b>=a and b>=x:
	print b
else:
	print x