c=raw_input()
b=raw_input()

a=[]
d=''
s=''
k=0

for i in range(len(c)):
    if k<11:    
        if c[i]=='0' or c[i]=='1' or c[i]=='2' or c[i]=='3' or c[i]=='4' or c[i]=='5' or c[i]=='6' or c[i]=='7' or c[i]=='8' or c[i]=='9':
            k+=1
            a.append(int(c[i]))
    else:
        if c[i]=='0' or c[i]=='1' or c[i]=='2' or c[i]=='3' or c[i]=='4' or c[i]=='5' or c[i]=='6' or c[i]=='7' or c[i]=='8' or c[i]=='9' or c[i]=='.':
            d=d+str(c[i])

final = ''
final+= "cpf "

for i in range(len(a)):
    final += str(a[i])

print(final)

d=float(d)
d=int(d*100)
d=float(d/100)

for i in range(len(b)):
    if b[i]=='0' or b[i]=='1' or b[i]=='2' or b[i]=='3' or b[i]=='4' or b[i]=='5' or b[i]=='6' or b[i]=='7' or b[i]=='8' or b[i]=='9' or b[i]=='.':
        s=s+str(b[i])

s=float(s)
s=int(s*100)
s=float(s/100)
print("%.2f"%(s+d))