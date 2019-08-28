/*
	СQ������һ�����г�Ϊ��ת����:
	��������n��m, ����n�ܱ�2m����������һ������������������1, 2, 3, 4..., ÿ��m�����ŷ�תһ��, �������Ϊ'-';��
	����n = 8, m = 2, ���о���: -1, -2, +3, +4, -5, -6, +7, +8.
	��n = 4, m = 1, ���о���: -1, +2, -3, + 4.
	СQ����ϣ�����ܰ�������ǰn���Ϊ���١�
	
	��������:
	���������������n��m(2 <= n <= 109, 1 <= m), ��������n�ܱ�2m������

	�������:
	���һ������, ��ʾǰn��͡�

	��������1:
	8 2

	�������1:
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
	30%, ��������
*/