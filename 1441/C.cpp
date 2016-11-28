#include<iostream>

using namespace std;

inline void create(int *& app, int n)
{
	int k = 0;
	app = new int[n * n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			if(i <= j)
				app[k] = 1;
			else
				app[k] = i - j + 1;
			k++;
		}
}

inline void del(int *&app, int *&bpp, int n)
{
	int k = 0;
	bpp = new int[(n - 2) * (n - 2)];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(i && j && i < n - 1 && j < n - 1)
			{
				bpp[k] = *(app + i * n + j);
				k++;
			}
}

inline int maindiagonal(int *&app, int n)
{
	int k = 0, sum = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(i == j)
				sum += *(app + i * n + j);
	return sum;
}

inline void output(int *&app, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - 1; j++)
			cout << *(app + i * n + j) << " ";
		cout << *(app + i * n + n - 1) << endl;
	}
}

int main()
{
	int n, *ap = NULL, *bp = NULL;
	cout << "Generated matrix:" << endl;
	cin >> n;
	create(ap, n);
	output(ap, n);
	cout << "del the elements on the side:" << endl;
	del(ap, bp, n);
	output(bp, n - 2);
	cout << "The sum of the diagonal:" << maindiagonal(ap, n) <<endl;
	return 0;
}
