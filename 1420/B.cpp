#include<iostream>
#include<cstdio>
#include<cmath>
 
using namespace std;
 
double a, x1, x2;
 
int main()
{
    while(cin >> a)
    {
        x1 = 1;
        x2 = a;
        while(fabs(x1 - x2) > 1e-8)
        {
            x1 = x2;
            x2 = (x1 + a / x1) / 2;
        }
        cout << x2 << endl;
    }
    return 0;
}
