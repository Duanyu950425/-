#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn = 1e6;
long long A[maxn];
int mainTest()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (A[j] > A[i])
				swap(A[j], A[i]);
	cout << endl;
	long result;
	if (n == 3)
		result = A[0] * A[1] * A[2];
	else
		result = max(A[0] * A[1] * A[2], A[0] * A[n - 1] * A[n - 2]);
	cout << result << endl;
	return 0;
}