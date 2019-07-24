#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main04()
{
	string str;
	int res = 0;
	cin >> str;
	sort(str.begin(), str.end());
	str.erase(unique(str.begin(), str.end()), str.end());//É¾³ıÖØ¸´ÔªËØ
	if (str.size() == 1)
		res = 1;
	else if (str.size() == 2)
		res = 2;
	cout << res << endl;
	return 0;
}