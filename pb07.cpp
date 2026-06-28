#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double normalRandom(double mean, double stddev) {
    double u1 = (double)rand()/RAND_MAX;
    double u2 = (double)rand()/RAND_MAX;
    return mean + stddev * sqrt(-2 * log(u1)) * cos(2 * 3.14159 * u2);
}

int main() {
    srand(time(0));
    int n = 200;
    double mean1 = 100, std1 = 20;
    double mean2 = 80, std2 = 20;
    
    double sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        sum1 += normalRandom(mean1, std1);
        sum2 += normalRandom(mean2, std2);
    }
    
    cout << "Sample 1 Mean: " << sum1/n << endl;
    cout << "Sample 2 Mean: " << sum2/n << endl;
    return 0;
}