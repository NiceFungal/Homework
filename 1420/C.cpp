#include<iostream>
 
using namespace std;
 
int main()
{
    for(int i = 1; i <= 1000; i++)
    {
        int tmp = 0;
        for(int j = 1; j < i; j++)
            if(i % j == 0)
                tmp += j;
        if(tmp == i)
            cout << i <<endl;
    }
    return 0;
}
