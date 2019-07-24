#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long *x = new long[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];
	long *y = new long[n];
	for (int i = 0; i < n; i++)
		cin >> y[i];

	int **a = new int*[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int w = j + 1; w < n; w++)
			{
				if (a[i][w] < a[i][j])
					swap(a[i][w], a[i][j]);
			}
		}
	}
	int Minsum = 0;
	for (int m = 0; m < n; m++)
	{

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			Minsum += a[i][j];
		}
		Minsum = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}