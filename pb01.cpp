#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    double arrivalRate = 1.0, serviceRate = 1.5;
    int numCustomers = 100;
    double clock = 0, serverFree = 0;
    double totalDelay = 0, totalBusy = 0;
    
    for(int i = 0; i < numCustomers; i++) {
        double interarrival = -log(1 - (double)rand()/RAND_MAX) / arrivalRate;
        clock += interarrival;
        double service = -log(1 - (double)rand()/RAND_MAX) / serviceRate;
        
        double startService = clock > serverFree ? clock : serverFree;
        double delay = startService - clock;
        totalDelay += delay;
        serverFree = startService + service;
        totalBusy += service;
    }
    
    double avgDelay = totalDelay / numCustomers;
    double avgQueue = arrivalRate * avgDelay;
    double utilization = totalBusy / clock;
    
    cout << "Average Delay: " << avgDelay << endl;
    cout << "Average Queue Length: " << avgQueue << endl;
    cout << "Utilization: " << utilization << endl;
    cout << "End Time: " << clock << endl;
    return 0;
}