#include<iostream>
#include<cmath>
 
using namespace std;
 
int main() {
    int a, b, c;
    while(cin >> a >> b >> c) {
        int mn = a;
        mn = min(mn, min(b, c));
        cout << mn << endl;
    }
    return 0;
}