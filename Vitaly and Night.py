# your code goes here
n, m = input("").split()
sum = 0
ind = 0
prev = 0
for i in range(int(n)):
    x = input('').split()
    for i in x:
        if (int(i)==1) and ((ind ==0 or ind%2==0) or (ind%2!=0 and prev == 0)):
            sum+=1
        ind+=1
        prev = int(i)
print(sum)
