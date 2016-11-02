#include<iostream>
#include<cmath>
 
using namespace std;
 
int main() {
    int a;
    while(cin >> a) {
        cout << a % 10 << "  " << a % 100 / 10 << "  " << a % 1000 / 100 << "  " << a % 10000 / 1000 << "  " << a / 10000 << endl;
    }
    return 0;
}