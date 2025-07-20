str=input().split(' ')
arr=1
cnt={}
for el in str:
    if(cnt.get(el)):
        print("Not unique")
        arr=0
        break
    cnt[el]=1
if(arr):
    print("All elements are unique")
    
    
set=set(str)
if(len(str)==len(set)):
    print("Unique")
else:
    print("Not unique")
    
