#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    double lambda = 2.0;
    int n = 10;
    
    for(int i = 0; i < n; i++) {
        double u = (double)rand()/RAND_MAX;
        double x = -log(1 - u) / lambda;
        cout << x << endl;
    }
    return 0;
}