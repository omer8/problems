NNN = int(input())
db = dict()
for i in range(NNN):
    name = input()
    if name in db:
        print(name+str(db[name]))
        db[name] +=1




    else:
        print('OK')
        db[name]=1
