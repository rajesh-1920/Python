import sys
from math import gcd
input = sys.stdin.readline

def solve():
    n,s,r=map(int,input().split())
    g=gcd(n,s)
    n=n//g
    s=s//g
    if(n<=r and s<=r):
        print(1)
    else:
        print(2)


if __name__=="__main__":
    for _ in range(int(input())):
        solve()