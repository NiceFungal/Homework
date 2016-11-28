#include<iostream>

using namespace std;

int n;
int sum[10];
int s[][3] = {{300, 250, 150}, {200, 240, 200}, {280, 210, 180}};
int p[] = {3500, 3300, 3800};

int main()
{ 
	for(int i = 0; i < 3; i++)
	{
		sum[i] = 0;
		for(int j = 0; j < 3; j++)
			sum[i] += s[i][j] * p[j];
	}
	while(cin >> n)
	{
		if(n == -1)
			break;
		cout << sum[n - 1] << endl;
	}
	return 0;
}
