#include<iostream>

using namespace std;

char ch;

int main()
{
	int cnt = 0, a = 0;
	double sum = 0;
	for(cin >> ch; ch != '.'; cin >> ch)
	{
		if(ch == 'A')
			a++;
		sum += ch;
		cnt++;
	}
	sum /= cnt;
	cout << a << " " << sum << endl;
	return 0;
}
