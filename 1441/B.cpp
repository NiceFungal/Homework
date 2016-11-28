#include<iostream>

using namespace std;

int num, a[10000];

int main()
{
	while(cin >> num)
	{
		if(num == -1)
			break;
		int cnt = 0, tmp = num;
		while(tmp != 0)
		{
			a[cnt++] = tmp % 10;
			tmp /= 10;
		}
		bool flag = 1;
		for(int i = 0, j = cnt - 1; i < j; )
			if(a[i++] != a[j--])
			{
				flag = 0;
				break;
			}
		if(flag)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
}
