#include<iostream>
#include<cstring>
 
using namespace std;
 
int T;
int n, m;
int c[100000], v[100000];
int f[100000 + 10];
 
int main()
{
    cin >> T;
    while(T--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            cin >> c[i] >> v[i];
        memset(f, 0, sizeof(f));
        for(int i = 0; i < n; i++)
            for(int j = m; j >= c[i]; j--)
                f[j] = max(f[j], f[j - c[i]] + v[i]);
        cout << f[m] << endl;
    }
    return 0;
}
