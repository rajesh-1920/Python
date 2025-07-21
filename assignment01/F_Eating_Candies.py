for _ in range(int(input())):
    n=input()
    arr=list(map(int,input().split()))
    ans=0
    psum={0,0}
    sum=0
    for el in arr:
        sum+=el
    
    print(type(psum))
    print(ans)