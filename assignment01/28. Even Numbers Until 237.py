str=input().split(',')
for el in str:
    if(el!=' '):
        t=int(el)
        if(t&1==0):
            print(t,end=' ')
