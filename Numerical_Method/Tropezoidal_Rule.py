import numpy as np

def f(x):
    return x**2 

def trapezoidal(a, b, n):
    h = (b - a) / n
    s = f(a) + f(b)
    for i in range(1, n):
        s += 2 * f(a + i * h)
    return (h / 2) * s

a = 0
b = 2
n = 4
result = trapezoidal(a, b, n)
print("Approximate Integration:", result)
