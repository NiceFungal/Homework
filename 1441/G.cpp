#include<iostream>
#include<cstdio>

using namespace std;

char a[10000], b[10000];

int main()
{
	while(1)
	{
		gets(a);
		gets(b);
		if(a[0] == '-' && a[1] == '1' && b[0] == '-' && b[1] == '1')
			break;
		cout << a << " " << b << endl;
	}
	return 0;
}
