z = input().split()
n , x = map(int,z)
distress= 0
for i in range(n):
    d = input()
    if d[0] == '+':
        x+=int(d[2:])
    else :
        if x >= int(d[2:]):
            x-=int(d[2:])
        else :
            distress+=1

print(x,distress)
