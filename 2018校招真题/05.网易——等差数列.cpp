#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main05()
{
	int n;
	cin >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (x[j] < x[i])
				swap(x[j], x[i]);
		}
	}
	int d = x[1] - x[0];
	for (int i = n - 1; i > 0; i--)
	{
		if (x[i] - x[i - 1] != d)
		{
			cout << "Impossible" << endl;
			return 0;
		}
	}
	cout << "Possible" << endl;
	return 0;
}