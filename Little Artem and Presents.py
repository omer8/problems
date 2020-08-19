import math as m
n = int(input())
if n%3==0:
    print(m.floor((n/3))*2)
else:
    print(m.floor((n/3))*2+1)
