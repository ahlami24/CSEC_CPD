x=raw_input()
sum=0
l=[]
for i in range(len(x)):
    if x[i] in l:
        continue
    else:  
        l.append(x[i])
        sum +=1
if sum%2==0:
    print "CHAT WITH HER!"
else:
    print "IGNORE HIM!"
