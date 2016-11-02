#include<iostream>
#include<bitset>
 
using namespace std;
 
void work(int n)
{
    int a;
    a = n % 2;
    n = n >> 1;
    if(n)
    	work(n);
    cout << a;
}
 
int main()
{
    cout << "decimal\t  binary\toctal\thexadecimal\n";
    for(int i = 1; i <= 256; i++)
    {
        cout << dec << i << "\t";
        work(i);
        cout << "\t";
        if(i < 128 )
            cout << "\t";
        cout << oct << i << "\t";
        cout << hex << i << endl;
 
    }
    return 0;
}
