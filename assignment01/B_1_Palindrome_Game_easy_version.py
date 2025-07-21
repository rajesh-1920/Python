for _ in range(int(input())):
    n=input()
    str=input()
    cnt=0
    for el in str:
        if(el=='0'):
            cnt+=1

    if(cnt==0):
        print('DRAW')
    else:
        if(cnt==1 or cnt%2==0):
            print('BOB')
        else:
            print('ALICE')