n = int(input())
countm=[]
countn=[]
for i in range(n):
    m,n = map(int,input().split())
    countm.append(m)
    countn.append(n)
x ,y ,z ,w = countm.count(0),countm.count(1),countn.count(0),countn.count(1)
print(min(x,y) + min(z,w))
