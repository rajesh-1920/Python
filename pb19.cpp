#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int patients = 100;
    double triageMean = 5.0, treatMean = 20.0, dischargeMean = 10.0;
    double totalTriage = 0, totalTreat = 0, totalDischarge = 0;
    double totalTime = 0;
    
    for(int p = 0; p < patients; p++) {
        double triage = -log(1 - (double)rand()/RAND_MAX) / (1.0/triageMean);
        double treat = -log(1 - (double)rand()/RAND_MAX) / (1.0/treatMean);
        double discharge = -log(1 - (double)rand()/RAND_MAX) / (1.0/dischargeMean);
        
        totalTriage += triage;
        totalTreat += treat;
        totalDischarge += discharge;
        totalTime += triage + treat + discharge;
    }
    
    cout << "Mean Triage Time: " << totalTriage/patients << endl;
    cout << "Mean Treatment Time: " << totalTreat/patients << endl;
    cout << "Mean Discharge Time: " << totalDischarge/patients << endl;
    cout << "Mean Total Time: " << totalTime/patients << endl;
    
    double bottleneck = max(max(totalTriage, totalTreat), totalDischarge);
    if(bottleneck == totalTriage) cout << "Bottleneck: Triage" << endl;
    else if(bottleneck == totalTreat) cout << "Bottleneck: Treatment" << endl;
    else cout << "Bottleneck: Discharge" << endl;
    return 0;
}