import sys
input=sys.stdin.readline

def solve():
    n=''.join(sorted(input(),reverse=True))
    print(n,end='')

if __name__=="__main__":
    for _ in range(int(input())):
        solve()