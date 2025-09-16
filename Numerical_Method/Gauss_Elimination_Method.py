

def gauss_elemination(A):
   
    for i in range(1,5):
        A[1][-i]=A[1][-i]-A[0][-i]*(A[1][0]/A[0][0])
        A[2][-i]=A[2][-i]-A[0][-i]*(A[2][0]/A[0][0])

    for i in range(1,4):
        A[2][-i]=A[2][-i]-A[1][-i]*(A[2][1]/A[1][1])
  
    x=[0,0,0]
    x[2]=A[2][3]/A[2][2]
    x[1]=(A[1][3]-A[1][2]*x[2])/A[1][1]
    x[0]=(A[0][3]-A[0][2]*x[2]-A[0][1]*x[1])/A[0][0]
    return x


A = [[2.0, 1.0, -1.0, 8.0],
     [-3.0, -1.0, 2.0,-11.0],
     [-2.0, 1.0, 2.0, -3.0]]

solution = gauss_elemination(A)
print("Solution:", solution)


