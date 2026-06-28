#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int cars = 100;
    double orderMean = 2.0, payMean = 1.5, pickupMean = 3.0;
    double totalOrder = 0, totalPay = 0, totalPickup = 0;
    
    for(int c = 0; c < cars; c++) {
        double order = -log(1 - (double)rand()/RAND_MAX) / (1.0/orderMean);
        double pay = -log(1 - (double)rand()/RAND_MAX) / (1.0/payMean);
        double pickup = -log(1 - (double)rand()/RAND_MAX) / (1.0/pickupMean);
        
        totalOrder += order;
        totalPay += pay;
        totalPickup += pickup;
    }
    
    cout << "Mean Order Time: " << totalOrder/cars << endl;
    cout << "Mean Pay Time: " << totalPay/cars << endl;
    cout << "Mean Pickup Time: " << totalPickup/cars << endl;
    
    double bottleneck = max(max(totalOrder/cars, totalPay/cars), totalPickup/cars);
    if(bottleneck == totalOrder/cars) cout << "Bottleneck: Order" << endl;
    else if(bottleneck == totalPay/cars) cout << "Bottleneck: Pay" << endl;
    else cout << "Bottleneck: Pickup" << endl;
    return 0;
}