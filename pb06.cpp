#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n) {
    double result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double lambda = 5.0;
    
    for(int k = 0; k <= 10; k++) {
        double prob = exp(-lambda) * pow(lambda, k) / factorial(k);
        cout << "P(X = " << k << ") = " << prob << endl;
    }
    
    cout << "Mean = " << lambda << endl;
    cout << "Variance = " << lambda << endl;
    return 0;
}