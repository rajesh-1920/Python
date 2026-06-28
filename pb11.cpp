#include <iostream>
using namespace std;

int main() {
    long long seed = 12345;
    long long a = 1664525, c = 1013904223, m = 4294967296LL;
    int n = 20;
    
    for(int i = 0; i < n; i++) {
        seed = (a * seed + c) % m;
        double random = (double)seed / m;
        cout << random << endl;
    }
    return 0;
}