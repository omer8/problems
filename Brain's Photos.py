n , m = input().split()
n,m=int(n),int(m)
y = []
z = []
for i in range(n):
    x = input().split()
    y.append(x)
for j in range(n):
    for k in range(m):
        if y[j][k] == 'C' or y[j][k] == 'M' or y[j][k] =='Y':
            z.append('#Color')
        else :
            z.append("#Black&White")
if '#Color' in z:
    print("#Color")
else:
    print("#Black&White")
