#include<iostream>
#include<algorithm>

using namespace std;

int n;
struct arr
{
	int val, id;
}a[100];

inline bool cmp(arr x, arr y)
{
	if(x.val < y.val)
		return 0;
	return 1;
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i].val;
	for(int i = 0; i < n; i++)
		a[i].id = i;
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++)
		cout << a[i].val << " " << a[i].id << endl;
	return 0;
}

