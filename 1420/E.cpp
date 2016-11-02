#include<cstdio>
#include<iostream>
#include<algorithm>
 
using namespace std;
 
int n,m;
int a[10000 + 10];
 
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        next_permutation(a,a+n);
    for(int i=0;i<n - 1;i++)
        cout << a[i] << " ";
    cout << a[n - 1] << endl;
}
