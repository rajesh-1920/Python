import math
import numpy as np

def simpson_1_3(f, a, b, n):
    if n % 2 == 1:
        raise ValueError("n must be even")
    h = (b - a) / n
    x = np.linspace(a, b, n+1)
    y = f(x)
    S = y[0] + y[-1] + 4 * np.sum(y[1:-1:2]) + 2 * np.sum(y[2:-1:2])
    return S * h / 3

def simpson_3_8(f, a, b, n):
    if n % 3 != 0:
        raise ValueError("n must be multiple of 3")
    h = (b - a) / n
    x = np.linspace(a, b, n+1)
    y = f(x)
    S = y[0] + y[-1] + 3 * np.sum(y[1:-1][(np.arange(1, n) % 3) != 0]) + 2 * np.sum(y[1:-1][(np.arange(1, n) % 3) == 0])
    return S * 3 * h / 8

def f(x):
    return np.sin(x)

a, b = 0.0, math.pi
print("Simpson 1/3:", simpson_1_3(f, a, b, 10))
print("Simpson 3/8:", simpson_3_8(f, a, b, 30))
