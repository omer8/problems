a , b = input().split()
a , b = int(a) , int(b)
year = 0
while b >= a:
    a *=3
    b *=2
    year+=1
print(year)
