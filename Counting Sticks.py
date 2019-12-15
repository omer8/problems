# your code goes here
x = input()
y = list(x)
a = len(y[:y.index('+')])
b = len(y[y.index('+')+1:y.index('=')])
c = len(y[y.index('=')+1:])
if a + b == c:
    print(x)
elif a+b+1 == c-1:
    print((a+1)*'|' + '+' + b*'|' + '=' + (c-1)*'|')
elif a+b-1 == c+1 and a>1:
    print((a-1)*'|' + '+' + b*'|' + '=' + (c+1)*'|')
elif a+b-1 == c+1 and b>1:
    print((a)*'|' + '+' + (b-1)*'|' + '=' + (c+1)*'|')
else:
    print('Impossible')
