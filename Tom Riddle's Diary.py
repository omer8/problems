# your code goes here
n = int(input(''))
x = set()
for i in range(0,n):
    s = input('')
    if s in x:
        print('YES')
    else:
        print('NO')
    x.add(s)
