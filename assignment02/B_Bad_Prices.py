import sys
input=sys.stdin.readline

def solve():
    n=int(input())
    arr=list(map(int,input().split()))
    mn=arr[-1]
    i=len(arr)-2
    ans=0
    while(i>=0):
        if(mn<arr[i]):
            ans+=1
        mn=min(mn,arr[i])
        i-=1
    print(ans)


if __name__=="__main__":
    t=1
    t=int(input())
    for _ in range(t):
        solve()