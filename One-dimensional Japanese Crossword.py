n = int(input())
s = input()
counter= 1 if s[-1] =='B' else 0
for i in range(n-2,-1,-1):
    if s[i] == 'B' and s[i+1] != 'B':
        counter+=1
m = s.split('W')
x=[]
for j in m:
    if len(j)>0:
        x.append(str(len(j)))
print(counter)
print(' '.join(x))
