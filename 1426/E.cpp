#include<iostream>
#include<algorithm>

using namespace std;

int n, k;
int num[1000000 + 10];
int a[100 + 5], b[100 + 5];

inline bool cmp(int x, int y)
{
	int aa = 0, bb = 0;
	while(x != 0)
	{
		a[++aa] = x % 10;
		x /= 10;
	}
	while(y != 0)
	{
		b[++bb] = y % 10;
		y /= 10;
	}
	for(int i = 0; i < min(aa, bb); i++)
	{
		if(a[aa - i] < b[bb - i])
			return 1;
		if(a[aa - i] > b[bb - i])
			return 0;
	}
	if(aa < bb)
		return 1;
	else
		return 0;
}

int main()
{
	while(cin >> n >> k)
	{
		for(int i = 1; i <= n; i++)
			num[i] = i;
		sort(num + 1, num + n + 1, cmp);
		cout << num[k] << endl;
	}
	return 0;
}
