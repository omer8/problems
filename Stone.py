N = int(input())
col = list(input())
count = 0
for i in range(N-1):

    if col[i] == col[i+1] :
        count +=1
    else:
        continue
print(count)
