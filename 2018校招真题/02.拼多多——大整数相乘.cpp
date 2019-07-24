#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main02()
{
	string num1, num2;
	string s = "";
	cin >> num1 >> num2;
	int len1 = num1.size();
	int len2 = num2.size();

	vector<int> vTemp(len1 + len2 - 1);
	int n1, n2;
	for (int i = 0; i < len1; i++)
	{
		n1 = num1[i] - '0';
		for (int j = 0; j < len2; j++)
		{
			n2 = num2[j] - '0';
			vTemp[i + j] += n1*n2;
		}
	}
	int carry = 0;
	int temp;
	for (int i = vTemp.size() - 1; i >= 0; i--)
	{
		temp = vTemp[i] + carry;
		vTemp[i] = temp % 10;
		s = to_string(vTemp[i]) + s;
		carry = temp / 10;
	}
	if (carry > 0)
		s = to_string(carry) + s;
	cout << s << endl;
	return 0;
}