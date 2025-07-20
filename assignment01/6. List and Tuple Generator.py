str=input()
arr=str.split(',')
list=[]
for el in arr:
    list.append(int(el))
tuple=tuple(list)
print(list)
print(tuple)