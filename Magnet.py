x=int(input())
l=[]
for i in range(x):
l.append(input())
s=1
for i in range(1,x):
if l[i]!=l[i-1]:
s+=1
print(s)
