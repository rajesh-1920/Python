for _ in range(int(input())):
    n=input()
    arr = list(map(int,input().split()))
    ans=0
    while(True):
        x=0
        for el in arr:
            x=x^(el^ans)
        if x==0 or ans>1000:
            break
        ans=ans+1
    if ans>1000:
        ans=-1
    print(ans)