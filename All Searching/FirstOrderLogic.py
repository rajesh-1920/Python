db = {}

def addData(s1,s2):
    db[s1]=s2

def display(p,relation,q=' '):
    if(relation=='v'):
        print(f"{db[p]} and {db[q].split()[-1]}")
    elif(relation=='^'):
        print(f"{db[p]} or {db[q].split()[-1]}")
    elif(relation=='~'):
        print(f"{db[p].split()[0]} is not {db[p].split()[-1]}")

addData('p','xyz is legend')
addData('q','xyz is grandmaster')
addData('r','xyz is ULTRA_PRO')
addData('x','xyz is a loser')

display('p','v','q') # v -> and
display('p','^','r') # ^ -> or
display('x','~') # ~ -> not