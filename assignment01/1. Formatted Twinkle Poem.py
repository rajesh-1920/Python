str=input()
arr=str.split(' ')

sp=[0,len('Twinkle,'),len('Twinkle, twinkle,')]
ind=1

for el in arr:
    if(el=='star,' or el=='are!' or el=='high,' or el=='sky.'):
        print(el)
        if(el=='sky.'):
            ind=0
        for i in range(sp[ind]):
            print(end=' ')
        ind+=1
        if(ind==3):
            ind-=1
            fl=0
    else :
        print(el,end=" ")