x = input().split()
n,b,d = map(int,x)
a = list(map(int,input().split()))
total_size = 0
counter = 0
for i in a:
    if i > b :
        continue
    else:
        total_size+=i
        if total_size > d:
            counter+=1
            total_size=0
print(counter)   
