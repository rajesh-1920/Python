#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int initialStock = 100, reorderPoint = 30, orderQty = 50;
    int days = 30, stock = initialStock;
    int totalSales = 0, totalShortage = 0, totalOrders = 0;
    
    for(int day = 0; day < days; day++) {
        int demand = rand() % 30 + 10;
        if(stock >= demand) {
            stock -= demand;
            totalSales += demand;
        } else {
            totalShortage += demand - stock;
            totalSales += stock;
            stock = 0;
        }
        
        if(stock <= reorderPoint) {
            stock += orderQty;
            totalOrders += orderQty;
        }
    }
    
    cout << "Total Sales: " << totalSales << endl;
    cout << "Total Shortage: " << totalShortage << endl;
    cout << "Total Orders: " << totalOrders << endl;
    cout << "Ending Stock: " << stock << endl;
    return 0;
}