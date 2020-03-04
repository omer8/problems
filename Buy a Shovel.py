k,r = input().split()
k,r =int(k),int(r)
i = 1
while True:
    if k%10==0 or k%10 == r:
        print(i)
        break
    k/=i
    k*=(i+1)
    i +=1
