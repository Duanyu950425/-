#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main07()
{
	long long n;
	while (cin >> n)
	{
		vector<int> a(n);
		for (long long i = 0; i < n; i++)
			cin >> a[i];
		if (n == 1)
		{
			cout << a[0] << endl;
			return 0;
		}
		if (n % 2 == 0)
		{
			for (long long i = n - 1; i >= 0; i -= 2)
				cout << a[i] << " ";
			cout << a[0];
			for (long long i = 2; i < n - 1; i += 2)
				cout << " " << a[i];
		}
		else
		{
			for (long long i = n - 1; i >= 0; i -= 2)
				cout << a[i] << " ";
			cout << a[1];
			for (long long i = 3; i < n - 1; i += 2)
				cout << " " << a[i];
		}
		cout << endl;
	}
	return 0;
}