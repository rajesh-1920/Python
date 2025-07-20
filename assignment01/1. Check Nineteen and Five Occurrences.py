arr=[19, 19, 15, 5, 3, 5, 5, 2]
c5=0
c19=0

for el in arr:
    if(el==5):
        c5+=1
    elif(el==19):
        c19+=1
print(c5>=3 and c19==2)