#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n = 5000;
    double lambda = 1.5;
    double sum = 0;
    
    for(int i = 0; i < n; i++) {
        double u = (double)rand()/RAND_MAX;
        double x = -log(1 - u) / lambda;
        sum += x;
    }
    
    cout << "Sample Mean: " << sum/n << endl;
    cout << "Theoretical Mean: " << 1/lambda << endl;
    cout << "Theoretical PDF at 1: " << lambda * exp(-lambda * 1) << endl;
    return 0;
}