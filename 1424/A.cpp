#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

inline double sh(double t)
{
	return (exp(t) - exp(-t)) / 2;
}

int main()
{
	double x, y;
	while(cin >> x)
	{
		y = sh(1 + sh(x)) / (sh(2 * x) + sh(3 * x));
		printf("%.4lf\n", y);
	}
}
