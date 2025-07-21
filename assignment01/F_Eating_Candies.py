for _ in range(int(input())):
    n=input()
    arr=list(map(int,input().split()))
    ans=0
    psum={0:0}
    sum=0
    i=0
    for el in arr:
        sum+=el
        #print(sum,end=' ')
        psum[sum]=i
        i+=1
    # print()
    # for key,value in psum.items():
    #     print(f"{key} = {value}")
    
    i=len(arr)-1
    sum=0
    while(i>0):
        psum.popitem()
        sum+=arr[i]
        if sum in psum:
            an=len(arr)-i+psum[sum]+1
            if(an>ans):
                ans=an
        i-=1

    #print(type(psum))
    print(ans)