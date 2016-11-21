#include<iostream>

using namespace std;

int y, m, d;

inline bool checky(int y)
{
	if(y % 400 == 0)
		return 1;
	if(y % 4 == 0 && y % 100 != 0)
		return 1;
	return 0;
}

inline int checkm(int m)
{
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 1;
	if(m == 2)
		return 2;
	if(m == 4 || m == 6 || m == 9 || m == 11)
		return 3;
}

int main()
{
	while(cin >> y >> m >> d)
	{
		if(y < 0 || m < 0 || d < 0)
		{
			cout << "date error" << endl;
			continue;
		}
		if(y < 1900)
		{
			cout << "date error" << endl;
			continue;
		}
		if(m > 12)
		{
			cout << "date error" << endl;
			continue;
		}
		if(checkm(m) == 1)
			if(d > 31)
			{
				cout << "date error" << endl;
				continue;
			}
		if(checkm(m) == 2)
		{
			if(checky(y))
				if(d > 29)
				{
					cout << "date error" << endl;
					continue;
				}
			if(!checky(y))
				if(d > 28)
				{
					cout << "date error" << endl;
					continue;
				}
		}
		if(checkm(m) == 3)
			if(d > 30)
			{
				cout << "date error" << endl;
				continue;
			}
		int tmp = 1900, sum = 0;
		while(tmp < y)
		{
			if(checky(tmp))
				sum += 366;
			else
				sum += 365;
			tmp++;
		}
		tmp = 1;
		while(tmp < m)
		{
			if(checkm(tmp) == 1)
				sum += 31;
			if(checkm(tmp) == 2)
			{
				if(checky(y))
					sum += 29;
				else
					sum += 28;
			}
			if(checkm(tmp) == 3)
				sum += 30;
			tmp++;
		}
		sum += d;
		tmp = sum % 7;
		if(tmp == 1)
			cout << "Monday" << endl;
		if(tmp == 2)
			cout << "Tuesday" << endl;
		if(tmp == 3)
			cout << "Wednesday" << endl;
		if(tmp == 4)
			cout << "Thursday" << endl;
		if(tmp == 5)
			cout << "Friday" << endl;
		if(tmp == 6)
			cout << "Saturday" << endl;
		if(tmp == 0)
			cout << "Sunday" << endl;

		
	}
	return 0;
}
