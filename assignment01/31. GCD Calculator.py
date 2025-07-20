str=input().split(' ')
t1=int(str[0])
t2=int(str[-1])

def gcd(x,y):
    if(y==0):
        return x
    return gcd(y,x%y)

print(gcd(t1,t2))