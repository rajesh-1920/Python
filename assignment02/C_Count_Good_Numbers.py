
def solve():
    l,r=map(int,input().split())
    l-=1
    n=r-l
    n-=r//2-l//2
    n-=r//3-l//3
    n-=r//5-l//5
    n-=r//7-l//7

    n+=r//6-l//6
    n+=r//10-l//10
    n+=r//14-l//14
    n+=r//15-l//15
    n+=r//21-l//21
    n+=r//35-l//35

    n-=r//30-l//30
    n-=r//42-l//42
    n-=r//70-l//70
    n-=r//105-l//105

    n+=r//210-l//210
    print(n)


if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        solve()