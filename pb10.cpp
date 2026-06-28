#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int machines = 5, simTime = 1000;
    double downtimes[5] = {0}, uptimes[5] = {0};
    int breakdowns[5] = {0};
    
    for(int m = 0; m < machines; m++) {
        double time = 0;
        while(time < simTime) {
            double uptime = -log(1 - (double)rand()/RAND_MAX);
            if(time + uptime > simTime) {
                uptimes[m] += simTime - time;
                break;
            }
            time += uptime;
            uptimes[m] += uptime;
            breakdowns[m]++;
            
            double repair = 1 + sqrt(-2 * log((double)rand()/RAND_MAX)) * cos(2 * 3.14159 * (double)rand()/RAND_MAX);
            if(repair < 0) repair = 0.5;
            time += repair;
            downtimes[m] += repair;
        }
    }
    
    double totalDowntime = 0;
    for(int m = 0; m < machines; m++) {
        totalDowntime += downtimes[m];
        cout << "Machine " << m+1 << ": Downtime=" << downtimes[m] 
             << ", Uptime=" << uptimes[m] << ", Breakdowns=" << breakdowns[m] << endl;
    }
    cout << "Total System Downtime: " << totalDowntime << endl;
    return 0;
}