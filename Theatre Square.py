import math
x = input().split()
x = list(map(lambda c:int(c),x))
n,m,a=x[0],x[1],x[2]
b = math.ceil(n/a)
c= math.ceil(m/a)
print(b*c)
