#https://codeforces.com/contest/118/submission/73141470
x = input().lower()
x=list(x)
y=[]
for i in x:
    if i not in ['a','o','i','e','u','y']:
        y.append(i)
y = '.'.join(y)
print('.'+y)
