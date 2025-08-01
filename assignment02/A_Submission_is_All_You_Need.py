for _ in range(int(input())):
    n=input()
    li = list(map(int,input().split()))
    ans=0
    for el in li:
        if(el):
            ans+=el
        else: 
            ans+=1
    print(ans)