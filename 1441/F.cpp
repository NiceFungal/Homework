#include<iostream>

using namespace std;

int n, a[10000];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i < n; i++)
		cout << a[i] << " ";
	cout << a[n] << endl;
	for(int i = n; i > 1; i--)
		cout << a[i] << " ";
	cout << a[1] << endl;
	return 0;
}
