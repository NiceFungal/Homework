#include<iostream>
#include<cstdio>

using namespace std;

int Rand(int m, int n)
{
	static int r;
	do
	{
		r = (25173 * r + 13849) % 65536;
	}while(r < m || r >= n);
	return r;
}

int main()
{
	int w, i, r, t = 0;
	char op, answer;
	int a, b, d;
	cout << "Start now? (Y or N)\n";
	cin >> answer;
	if(answer == 'N' || answer == 'n')
		return 0;
	while(1)
	{
		cout << "Please enter difficulty (1 or 2):\n";
		cin >> w;
		if(w != 1 && w != 2)
			cout << "Input error, please re-enter!" << endl;
		else break;
	}
	while(1)
	{ 
		cout << "Please enter the type of operation (+, -, *, /):\n";  
		cin >> op;
		if (op != '+' && op != '-' && op != '*' && op != '/')
			cout << "Input error, please re-enter!" << endl;
		else 
			break;
	}
	t = 0;
	for(i = 1; i <= 10; i++)
	{ 
		while(1)
		{ 
			if(w == 1)
			{
				a = Rand(0, 10);
				b = Rand(0, 10);
			}
			else if(w == 2)
			{
				a = Rand(10, 100);
				b = Rand(10, 100);
			}
			if(op == '-')
				if(a<b)
					continue;
			if(op == '/')
				if(int(a / b) != (a / b))
					continue;
			break;
		}
		cout << a << op << b << '=' << endl;
		cin >> d;
		switch (op)
		{
			case '+' : r = a + b; break;
			case '-' : r = a - b; break;
			case '*' : r = a * b; break;
			case '/' : r = a / b; break;	    
		}
		if(r == d)
		{
			cout << "You're right, get 10 points." << endl;
			t = t + 10;
		}
		else 
			cout << "answer incorrectly." << endl;
	}
	cout << "Your grades are: " << t << endl;
}
