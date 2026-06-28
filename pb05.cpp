#include <iostream>
#include <cmath>
using namespace std;

double combination(int n, int k) {
    if(k > n) return 0;
    if(k == 0 || k == n) return 1;
    double result = 1;
    for(int i = 1; i <= k; i++) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main() {
    int n = 15, k = 13;
    double p = 0.90;
    double q = 1 - p;
    
    double prob13 = combination(n, k) * pow(p, k) * pow(q, n-k);
    double mean = n * p;
    double variance = n * p * q;
    
    cout << "Probability exactly 13 arrive: " << prob13 << endl;
    cout << "Mean: " << mean << endl;
    cout << "Variance: " << variance << endl;
    return 0;
}