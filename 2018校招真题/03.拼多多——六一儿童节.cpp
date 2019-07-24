#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int maxn = 1e6;
int w[maxn], h[maxn];

int main03()
{
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> h[i];
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> w[i];
	sort(h, h + n);
	sort(w, w + m);
	int i = 0, j = 0, res = 0;
	while (i < n && j < m)
	{
		if (h[i] <= w[j])
		{
			res++;
			i++;
			j++;
		}
		else
			j++;
	}
	cout << res << endl;
	return 0;
}