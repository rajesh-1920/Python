str=input().split(' ')
t1=int(str[-2])
t2=int(str[-1])

from math import gcd

print(t1)
print(t2)

print(int(t1*t2/gcd(t1,t2)))