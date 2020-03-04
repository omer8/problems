N = int(input())
Res = 0
for i in range(N):
    x = input()
    if x[1]=='+':
        Res+=1
    else:
        Res-=1
print(Res)
