
def gauss_jordan(A):
    
    fac1=A[1][0]/A[0][0]
    fac2=A[2][0]/A[0][0]
    for i in range(4):
       A[1][i]=A[1][i]-A[0][i]*fac1
       A[2][i]=A[2][i]-A[0][i]*fac2
       
    fac1=A[0][1]/A[1][1]
    fac2=A[2][1]/A[1][1]
    for i in range(4):
       A[0][i]=A[0][i]-A[1][i]*fac1
       A[2][i]=A[2][i]-A[1][i]*fac2
    
    fac1=A[1][2]/A[2][2]
    fac2=A[0][2]/A[2][2]
    for i in range(4):
       A[1][i]=A[1][i]-A[2][i]*fac1
       A[0][i]=A[0][i]-A[2][i]*fac2
    
   
    return [A[0][3]/A[0][0],A[1][3]/A[1][1],A[2][3]/A[2][2]]

A = [[2.0, 1.0, -1.0, 8.0],
     [-3.0, -1.0, 2.0,-11.0],
     [-2.0, 1.0, 2.0, -3.0]]

solution = gauss_jordan(A)
print("Solution:", solution)