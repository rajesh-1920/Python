#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double simulation() {
    double arrivalRate = 1.0, serviceRate = 1.2;
    int customers = 100;
    double clock = 0, serverFree = 0, totalDelay = 0;
    
    for(int i = 0; i < customers; i++) {
        double interarrival = -log(1 - (double)rand()/RAND_MAX) / arrivalRate;
        clock += interarrival;
        double service = -log(1 - (double)rand()/RAND_MAX) / serviceRate;
        double start = clock > serverFree ? clock : serverFree;
        totalDelay += start - clock;
        serverFree = start + service;
    }
    return totalDelay / customers;
}

int main() {
    srand(time(0));
    int replications = 30;
    double waits[30], sum = 0, sumSq = 0;
    
    for(int r = 0; r < replications; r++) {
        waits[r] = simulation();
        sum += waits[r];
        sumSq += waits[r] * waits[r];
    }
    
    double mean = sum / replications;
    double variance = (sumSq - sum*sum/replications) / (replications - 1);
    double se = sqrt(variance / replications);
    double halfWidth = 2.045 * se;
    
    cout << "Mean: " << mean << endl;
    cout << "Standard Error: " << se << endl;
    cout << "95% CI: [" << mean - halfWidth << ", " << mean + halfWidth << "]" << endl;
    return 0;
}