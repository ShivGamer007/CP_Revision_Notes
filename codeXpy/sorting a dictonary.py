#sorting a dictionary by keys
#output is a sorted list of keys
d={2:5,1:6,3:4}
p=list(d)
print(p)
p.sort()
print(p)

#OR 
dc={2:5,1:6,3:4}
t=sorted(dc)
print(t)

#sorting a dictionary by keys
#output is a sorted list of key-value pair
dd={2:5,1:6,3:4}
ans=sorted(dd.items())
print(ans)
res=sorted(dd.items(),key=lambda x:x[1])
print(res)
#make res again a sorted dictionary(sorted by value):
w={}
for i in range(len(res)):
    w[res[i][0]]=res[i][1]
print(w)
    
