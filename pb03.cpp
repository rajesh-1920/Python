#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int stock = 50, s = 20, S = 80, days = 30;
    double holdingCost = 2.0, shortageCost = 5.0;
    double totalHolding = 0, totalShortage = 0;
    
    for(int day = 0; day < days; day++) {
        double u1 = (double)rand()/RAND_MAX;
        double u2 = (double)rand()/RAND_MAX;
        double demand = 30 + 10 * sqrt(-2 * log(u1)) * cos(2 * 3.14159 * u2);
        if(demand < 0) demand = 0;
        
        if(stock >= demand) {
            stock -= (int)demand;
            totalHolding += stock * holdingCost;
        } else {
            totalShortage += (demand - stock) * shortageCost;
            stock = 0;
        }
        
        if(stock <= s) {
            stock = S;
        }
    }
    
    cout << "Total Holding Cost: " << totalHolding << endl;
    cout << "Total Shortage Cost: " << totalShortage << endl;
    cout << "Total Cost: " << totalHolding + totalShortage << endl;
    return 0;
}