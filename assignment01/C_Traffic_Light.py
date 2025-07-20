t=int(input())
for test in range(t):
    s=input().split()
    str=input()
    str=str+str

    mx=0
    pos=0
    i=0
    for el in str:
        if(el==s[1]):
            if(pos>i):
                i=pos
            while(i<len(str)):
                if(str[i]=='g'):
                    if(mx<i-pos):
                        mx=i-pos
                    break
                i+=1
        pos+=1

    print(mx)