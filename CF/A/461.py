x = input()
num = raw_input()
num = num.split(' ')
score = 0
lendia = len(num)

for i in range(lendia):
	num[i] = int(num[i])

if lendia > 2:
	num.sort()

	for i in range(lendia):
		if(lendia-i == 2):
			zz = i
		if lendia-i <= 2:
			score += num[i]*(zz+2)
		else:
			score += num[i]*(i+2)
elif lendia == 1:
	for i in num:
		score += i
else:
	for i in num:
		score += i
	score *= 2

print score