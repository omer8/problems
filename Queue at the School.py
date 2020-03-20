#https://codeforces.com/contest/266/submission/73347059
n,t = input().split()
n,t=int(n),int(t)
s = list(input())
for i in range(t):
    j=0
    while (j<n-1):
        if s[j] == 'B' and s[j+1] == 'G':
            s[j+1] = 'B'
            s[j] = 'G'
            j+=2

        else:
            j+=1


print(''.join(s))
