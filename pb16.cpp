#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n = 200, warmup = 50;
    double values[200];
    double sum = 0;
    
    for(int t = 0; t < n; t++) {
        values[t] = 10 + 20 * exp(-t/30.0) + (double)rand()/RAND_MAX * 5;
        if(t >= warmup) {
            sum += values[t];
        }
    }
    
    double steadyMean = sum / (n - warmup);
    cout << "Steady-State Mean: " << steadyMean << endl;
    cout << "Warm-up period: " << warmup << endl;
    return 0;
}