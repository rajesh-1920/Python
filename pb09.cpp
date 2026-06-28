#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double data[] = {2.1, 3.5, 1.8, 4.2, 2.9, 3.7, 1.5, 4.8, 3.1, 2.3};
    int n = 10;
    double sum = 0, sumSq = 0;
    
    for(int i = 0; i < n; i++) {
        sum += data[i];
        sumSq += data[i] * data[i];
    }
    
    double mean = sum / n;
    double variance = (sumSq - sum*sum/n) / (n-1);
    double stddev = sqrt(variance);
    
    cout << "Normal Parameters: Mean=" << mean << ", SD=" << stddev << endl;
    return 0;
}