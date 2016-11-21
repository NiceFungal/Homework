#include<iostream>

using namespace std;

double a, b, c, m1, m2, m3, ans;

int main()
{
	while(cin >> a >> b >> c)
	{
		m1 = (a + b + c) / 3;
		m2 = (a + b + b + c) / 3;
		m3 = (a + b + b + c) / 3;
		ans = m1 / (m2 * m3);
		cout << ans << endl;
	}
	return 0;
}
