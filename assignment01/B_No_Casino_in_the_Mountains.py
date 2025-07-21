for _ in range(int(input())):
    n,x=map(int,(input()).split())
    arr=list(map(int,input().split()))
    ans=0;cnt=0;fl=1
    for el in arr:
        if(fl):
            if(el==0):
                cnt+=1
            else:
                cnt=0
            if(cnt==x):
                ans+=1;cnt=0;fl=0
        else:
            cnt=0;fl=1
    print(ans)
