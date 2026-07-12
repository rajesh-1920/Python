#include <iostream>
using namespace std;

int main() {
    double passProb = 0.85;
    double failProb = 1 - passProb;
    double mean = passProb;
    double variance = passProb * failProb;

    
    cout << "Pass Probability: " << passProb << endl;
    cout << "Fail Probability: " << failProb << endl;
    cout << "Mean: " << mean << endl;
    cout << "Variance: " << variance << endl;
    return 0;
}
