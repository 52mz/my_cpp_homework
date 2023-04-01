#include<iostream>
#include <ctime>

using namespace std;
//猜数字游戏
int main(void)
{
	int x;	//计算机随机生成[1, 100]
	int n;	//用户输入数字
	int counter = 0;		//计数器

	srand(time(NULL));		//设置当前时间为随机数种子值
	x = rand() % 100 + 1;
	//cout << x << endl;

	do
	{
		//输入数字n
		cout << "输入：";
		cin >> n;
		counter++;

		//比较n和x，给出相应提示
		if(n > x)
			cout << "大了" << endl;
		else if(n < x)
			cout << "小了" << endl;
		else
			cout << "恭喜，猜中了!" << endl;

	}while(n != x && counter < 5);

	if(n != x)
	{
		cout << "抱歉，游戏结束！" << endl;
	}
	else if(counter < 3)
	{
		cout << "天才!" << endl;
	}

	return 0;
}