#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn = 1e6;
long long arr[maxn];

int main01()
{
	int n;
	long long maxi[3], mini[3], ans;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] > arr[i])
				swap(arr[j], arr[i]);
	}
	maxi[0] = arr[0];
	maxi[1] = arr[1];
	maxi[2] = arr[2];
	mini[0] = arr[n - 3];
	mini[1] = arr[n - 2];
	mini[2] = arr[n - 1];

	if (n == 3)
		ans = maxi[0] * maxi[1] * maxi[2];
	else
		ans = max (maxi[0]*maxi[1]*maxi[2], maxi[0]*mini[1]*mini[2]);
	cout << ans << endl;
	return 0;
}