#include<iostream>
using namespace std;

int main()
{
	int x;
	int r;
	int y = 0;		
	int t;			

	cout << "输入一个正整数：";
	cin >> x;

	t = x;

	while(t > 0)
	{
		r = t % 10;
		y = y * 10 + r;

		t = t / 10;
	}

	cout << y << endl;

	if(x == y)
		cout << x << "是回文数" << endl;

	return 0;
}
