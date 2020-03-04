string = input()
x = string.split('WUB')
y = []
for i in x:
    if len(i) > 0:
        y.append(i)
    else:
        continue
z = ' '.join(y)
print(z)
