x=input()
y=x.split(' ')
x=y[0]
y=y[1]

while x!='0' and y!='0':
   a=y.replace(x,'')
   
   if a!='':
       print(int(a))
   else:
       print("0")
   
   x=input()
   y=x.split(' ')
   x=y[0]
   y=y[1]