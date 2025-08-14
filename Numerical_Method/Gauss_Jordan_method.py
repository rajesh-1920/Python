import numpy as np

def gauss_jordan(a, b):
    aug = np.hstack((a.astype(float), b.reshape(-1, 1).astype(float)))
    n = len(b)
    
    for i in range(n):
        aug[i] = aug[i] / aug[i, i]
        for j in range(n):
            if i != j:
                aug[j] = aug[j] - aug[j, i] * aug[i]
    return aug[:, -1]

A = np.array([[2, 1, -1],
              [-3, -1, 2],
              [-2, 1, 2]])
B = np.array([8, -11, -3])

solution = gauss_jordan(A, B)
print("Solution: x = {:.2f}, y = {:.2f}, z = {:.2f}".format(*solution))
