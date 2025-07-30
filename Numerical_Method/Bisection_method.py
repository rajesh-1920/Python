import matplotlib.pyplot
import numpy

def bisection_method(f, a, b, error_accepted):
    
    c=(a+b)/2.0
    if(f(a)*f(b)>=0):
        return "f(a) and f(b) must have opposite signs."
    if abs(f(c))<error_accepted:
        return c
    elif f(c)*f(a)<0:
        return bisection_method(f,a,c,error_accepted)
    else:
        return bisection_method(f,c,b,error_accepted)


def f(x):
    return x**2 - 2

if __name__=="__main__":
    root=bisection_method(f,2,10,1e-5)
    # print(root)
    print(numpy.arange(0, 3, 0.1))

    matplotlib.pyplot.plot(numpy.arange(0, 3, 0.1), f(numpy.arange(0, 3, 0.1)))
    matplotlib.pyplot.axvline(root)

    matplotlib.pyplot.grid()
    matplotlib.pyplot.show()