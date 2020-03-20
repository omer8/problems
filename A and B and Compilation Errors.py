#https://codeforces.com/contest/519/submission/73591622
n1 = input()
n2 = list(map(int,input().split()))
n3 = list(map(int,input().split()))
n4 = list(map(int,input().split()))
n2.sort()
n3.sort()
n4.sort()
for i in n3:
    if i in n2:
        n2.remove(i)
print(n2[0])
for j in n4:
    if j in n3:
        n3.remove(j)
print(n3[0])
