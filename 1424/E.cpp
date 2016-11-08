#include<iostream>

using namespace std;

int guess(int k = 0)
{ 
	static int min = 1;
	static int max = 1000;
	static int g = 500;
	switch(k)
	{
		case 0:	break;
		case 1:	max = g - 1; break;
		case -1: min = g + 1; break;
		default : return g;
	}
	g = (min + max) / 2;
	return g;
}

int main()
{
	int answer,t = 1;
	cout << guess() << endl;
	while(1)
	{ 
		cin>>answer;
		if(answer == 0)
		{ 
		   cout << "Bingo" << endl;
		   break;
		}
		cout << guess(answer) << endl;
		t++;
	}
}

