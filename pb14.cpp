#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int queue = 0;
    int events = 20;
    
    for(int e = 0; e < events; e++) {
        double time = e * 1.5;
        int type = rand() % 2;
        
        if(type == 0) {
            queue++;
            cout << "Event " << e+1 << ": Time=" << time << ", Arrival, Queue=" << queue << endl;
        } else {
            if(queue > 0) {
                queue--;
                cout << "Event " << e+1 << ": Time=" << time << ", Departure, Queue=" << queue << endl;
            } else {
                cout << "Event " << e+1 << ": Time=" << time << ", Departure, Queue=0 (Empty)" << endl;
            }
        }
    }
    return 0;
}