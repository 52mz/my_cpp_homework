#include<iostream>
using namespace std;

int main()
{
	int x;
	int r;
	int y = 0;		

	cout << "put in number";
	cin >> x;

	while(x > 0)//输入X求其逆序数
	{
		r = x % 10;
		
		y = y * 10 + r;

		x = x / 10;
	}

	cout << y << endl;

	return 0;
}