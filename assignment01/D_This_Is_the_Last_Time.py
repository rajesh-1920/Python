import sys
from collections import defaultdict
input=sys.stdin.readline

for _ in range(int(input())):
    n,k=map(int,input().split())
    dic=defaultdict(int)
    for i in range(n):
        x,y,z=map(int,input().split())
        if x in dic:
            if(dic[x]<z):
                dic[x]=z
        else:
            dic[x]=z
    for key in sorted(dic):
        if(key<=k):
            k=max(k,dic[key])
        else:
            break
    print(k)