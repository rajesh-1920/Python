for _ in range(int(input())):
    a,b,c,d=map(int,input().split())
    if(b>d):
        print(-1)
        continue
    ans=d-b
    a+=ans
    if(c>a):
        print(-1)
        continue
    ans+=a-c
    print(ans)