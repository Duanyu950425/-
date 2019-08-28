/*
	小Q定义了一种数列称为翻转数列:
	给定整数n和m, 满足n能被2m整除。对于一串连续递增整数数列1, 2, 3, 4..., 每隔m个符号翻转一次, 最初符号为'-';。
	例如n = 8, m = 2, 数列就是: -1, -2, +3, +4, -5, -6, +7, +8.
	而n = 4, m = 1, 数列就是: -1, +2, -3, + 4.
	小Q现在希望你能帮他算算前n项和为多少。
	
	输入描述:
	输入包括两个整数n和m(2 <= n <= 109, 1 <= m), 并且满足n能被2m整除。

	输出描述:
	输出一个整数, 表示前n项和。

	输入例子1:
	8 2

	输出例子1:
	8
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main10()
{
	long m, n;
	vector<int> v;
	cin >> n;
	cin >> m;

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;
	
	long sum_negitive = 0;
	//cout << "m=" << m << endl;
	for (int num = 0; num < m; num++)
	{
		int i = 0;
		//cout << "i=" << i << endl;
		//cout << "2*m*i=" << 2 * m*i << endl;
		while (2 * m * i < n)
		{
			//cout << "v[" << num + 2 * m*i << "]=" << v[num + 2 * m*i] << endl;
			sum_negitive -= v[num + 2 * m * i];
			//cout << "sum_negitive = " << sum_negitive << endl;
			i++;
			//cout << "i=" << i << endl;
			//cout << "2*m*i=" << 2 * m*i << endl;
		}
	}

	long sum_positive = 0;
	for (int num = m; num < 2 * m; num++)
	{
		int i = 0;
		//cout << "i=" << i << endl;
		//cout << "2*m*i=" << 2 * m*i << endl;
		while (2 * m*i < n)
		{
			//cout << "v[" << num + 2 * m*i << "]=" << v[num + 2 * m*i] << endl;
			sum_positive += v[num + 2 * m*i];
			//cout << "sum_positive = " << sum_positive << endl;
			i++;
			//cout << "i=" << i << endl;
			//cout << "2*m*i=" << 2 * m*i << endl;
		}
	}

	long sum = sum_negitive + sum_positive;
	cout << sum << endl;
	
	return 0;
}

/*
	30%, 超过限制
*/