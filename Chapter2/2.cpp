#include<iostream>

using namespace std;

char s1, s2;

int main() 
{
	while(cin >> s1 >> s2)
	{
		if(s1 == s2)
			cout << "tie" << endl;
		else if(s1 == 's')
		{
			if(s2 == 'r')
				cout << "p2 win" << endl;
			if(s2 == 'p')
				cout << "p1 win" << endl;
		}
		else if(s1 == 'r')
		{
			if(s2 == 's')
				cout << "p1 win" << endl;
			if(s2 == 'p')
				cout << "p2 win" << endl;
		}
		else if(s1 == 'p')
		{
			if(s2 == 's')
				cout << "p2 win" << endl;
			if(s2 == 'r')
				cout << "p1 win" << endl;
		}
	}
	return 0;
}
