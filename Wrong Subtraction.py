#https://codeforces.com/contest/977/submission/73142912
x,n = input().split()
n = int(n)
for i in range(n):
    if x[-1]=='0':
        x = str(round(int(x)/10))
    else:
        x = str(int(x)-1)
print(x)
