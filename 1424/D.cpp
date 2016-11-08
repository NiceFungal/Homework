#include<iostream>

using namespace std;

void sort(double x, double y)
{
	if(x > y) 
		cout << x << ' ' << y << endl;
	else 
		cout << y << ' ' << x << endl;
}

void sort(double x, double y, double z )
{ 
	double t;
	if(y < z)
	{
		t = y; y = z; z = t;
	}
	if(x < z)
	{
		t = x; x = z; z = t;
	}
	if(x < y)
	{
		t = x; x = y ;y = t;
	}
	cout << x << ' ' << y << ' ' << z << endl;
}
int main()
{ 
	int n;
	double a, b, c;
	while(cin >> n)
	{
		if(n == 2)
		{
			cin >> a >> b;
			sort(a, b);
		}
		else
		{
			cin >> a >> b >> c;
			sort(a, b, c);
		}
	}
}


