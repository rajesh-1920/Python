#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double waits[] = {3.2, 4.3, 5.1, 4.2, 4.6};
    int n = 5;
    double sum = 0, sumSq = 0;
    
    for(int i = 0; i < n; i++) {
        sum += waits[i];
        sumSq += waits[i] * waits[i];
    }
    
    double mean = sum / n;
    double variance = (sumSq - sum*sum/n) / (n - 1);
    double stddev = sqrt(variance);
    double se = stddev / sqrt(n);
    double halfWidth = 2.776 * se;
    double desired = 0.5;
    int required = (int)((2.776 * stddev / desired) * (2.776 * stddev / desired)) + 1;
    
    cout << "Sample Mean: " << mean << endl;
    cout << "Sample Variance: " << variance << endl;
    cout << "Standard Deviation: " << stddev << endl;
    cout << "Standard Error: " << se << endl;
    cout << "95% CI: [" << mean - halfWidth << ", " << mean + halfWidth << "]" << endl;
    cout << "Required Replications for half-width 0.5: " << required << endl;
    return 0;
}