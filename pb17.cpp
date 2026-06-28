#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int customers = 100, atms = 3;
    double freeTime[3] = {0, 0, 0};
    double arrivalRate = 0.8, serviceRate = 1.0;
    double clock = 0, totalWait = 0;
    int maxQueue = 0;
    
    for(int c = 0; c < customers; c++) {
        double interarrival = -log(1 - (double)rand()/RAND_MAX) / arrivalRate;
        clock += interarrival;
        double service = -log(1 - (double)rand()/RAND_MAX) / serviceRate;
        
        int earliest = 0;
        for(int a = 1; a < atms; a++) {
            if(freeTime[a] < freeTime[earliest]) earliest = a;
        }
        
        double start = clock > freeTime[earliest] ? clock : freeTime[earliest];
        double wait = start - clock;
        totalWait += wait;
        
        freeTime[earliest] = start + service;
        
        int queue = 0;
        for(int a = 0; a < atms; a++) {
            if(freeTime[a] > clock) queue++;
        }
        if(queue > maxQueue) maxQueue = queue;
    }
    
    cout << "Average Waiting Time: " << totalWait/customers << endl;
    cout << "Maximum Queue Length: " << maxQueue << endl;
    return 0;
}