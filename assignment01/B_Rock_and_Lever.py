for _ in range(int(input())):
    n=input()
    list=map(int,input().split())
    ans=0
    mp=[]
    for i in range(40):
        mp.append(0)
    #print(len(mp))
    for el in list:
        t=el
        cnt=0
        while(t>0):
            cnt+=1
            t=int(t/2)
        ans+=mp[cnt+1]
        mp[cnt+1]+=1
        #print(cnt)
    print(ans)