#include<iostream>
 
using namespace std;
 
int main() {
    double x, y;
    while(cin >> x >> y) {
        if(x <= 2 && x >= -2 && y <= 2 && y >= -2)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}