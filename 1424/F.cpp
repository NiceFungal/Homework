#include<iostream>

using namespace std;

inline int Multi(int m, int n)
{
	int i, t = 1;
	for(i = n; i <= m; i++)
		t = t * i;
	return t;
}

int Fabricate(int m, int n)
{
	return Multi(m, m - n + 1) / Multi(n, 1);
}

int main()
{
	int m, n;
	cin >> m >> n;
	while(m != -1 && n != -1)
	{
		cout << Fabricate(m, n) << endl;
		cin >> m >> n;
	}
}
