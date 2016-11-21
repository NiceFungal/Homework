#include<iostream>
#include<cmath>

using namespace std;

int k;
double g, ans;

inline double f(int t)
{
	return (1 + exp(-t)) / (1 + exp(t));
}

int main()
{
	while(cin >> k)
	{
		ans = 0;
		for(int x = 0; x <= k; x++)
			for(int y = 0; x + y <= k; y++)
			{
				if(x <= y)
					g = (f(x - y) + f(x)) / 2;
				else
					g = (f(y - x) + f(y)) / 2;
				if(g > ans)
					ans = g;
			}
		cout << ans << endl;
	}
	return 0;
}
