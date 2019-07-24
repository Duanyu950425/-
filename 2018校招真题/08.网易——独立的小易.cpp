#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main08()
{
	long x, f, d, p;
	cin >> x >> f >> d >> p;
	int day;
	if (d - x * f <= 0)
		day = d / x;
	else
		day = (d + f * p) / (x + p);
	cout << day << endl;
	return 0;
}