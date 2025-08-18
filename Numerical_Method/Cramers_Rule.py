import numpy as np

A = np.array([[2, 1, -1],
              [-3, -1, 2],
              [-2, 1, 2]])

B = np.array([8, -11, -3])

det_A = np.linalg.det(A)

if det_A == 0:
    print("No unique solution exists (determinant = 0)")
else:
    n = len(B)
    solutions = []

    for i in range(n):
        Ai = np.copy(A)
        Ai[:, i] = B
        det_Ai = np.linalg.det(Ai)
        solutions.append(det_Ai / det_A)

    print("Solutions:")
    for i, val in enumerate(solutions, start=1):
        print(f"x{i} = {val:.2f}")
