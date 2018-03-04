def s(n):
	l=0
	while(n>0):
		l+=n%10
		n=n//10
	return l
k=0
for i in range(0,999):
	if s(i)%6==0:
		print(i)
		k+=1
print(k)