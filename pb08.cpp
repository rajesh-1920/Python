#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double avgTime = 100.0;
    double lambda = 1.0 / avgTime;
    double threshold = 120.0;
    
    double prob = exp(-lambda * threshold);
    cout << "P(X > 120) = " << prob << endl;
    
    double lambdas[] = {0.5, 1.0, 2.0, 4.0};
    for(int i = 0; i < 4; i++) {
        cout << "Lambda " << lambdas[i] << ": f(0) = " << lambdas[i] << endl;
    }
    return 0;
}