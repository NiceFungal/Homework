#include<iostream>

using namespace std;

int n, a[1000], x;

inline void insert(int a[], int n, int x)
{
	int p;
	if(x < a[n - 1])
	{
		for(int i = 1; i < n; i++)
			if(x < a[i])
			{
				p = i;
				break;
			}
		for(int j = n - 1; j >= p; j--)
			a[j] = a[j - 1];
		a[p] = x;
	}
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;
	insert(a, n, x);
	for(int i = 0; i < n - 1; i++)
		cout << a[i] << " ";
	cout << a[n - 1] << endl;
	return 0;
}
