#include<iostream>

using namespace std;

int n;
int a[10 + 5];

int main() {
	while(cin >> n) {
		if(n / 100000 == 0 || n / 100000 >= 10)
			cout << "error" << endl;
		else
		{
			a[1] = (n % 10 + 7) % 10;
			a[2] = (n / 10 % 10 + 7) % 10;
			a[3] = (n / 100 % 10 + 7) % 10;
			a[4] = (n / 1000 % 10 + 7) % 10;
			a[5] = (n / 10000 % 10 + 7) % 10;
			a[6] = (n / 100000 + 7) % 10;
			for(int i = 1; i <= 6; i++)
				cout << a[i];
			cout << " " << n << endl;
		}
	}
	return 0;
}
