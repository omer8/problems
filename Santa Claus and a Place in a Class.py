import math
x = input().split()
n,m,k = list(map(int,x))
if k%2==0 and k%(2*m)==0 :
    r=k/(2*m)
    s='R'
elif k%2==0 and k%(2*m)!=0 :
    r=k/(2*m)+1
    s='R'
elif k%2==0 and k<=2*m:
    r=1
elif k%2!=0 :
    r=k/(2*m)+1
    s='L'
    d=(k%(2*m))/2+1
if k%(2*m)==0 :
    d=m
elif k%(2*m)!=0 and k%2==0:
    d=(k%(2*m))/2
print(math.floor(r),math.floor(d),s)
