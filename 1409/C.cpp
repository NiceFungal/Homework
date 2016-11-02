#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
		for(int i = 2; i <= n; i++)
			while(n % i == 0)
			{
				n /= i; cout << i;
				if(n != 1) cout << " ";
			}
		cout << endl;
	}
}
