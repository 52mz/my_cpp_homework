#include<iostream>
#define length 64
#define tran_to 16

using namespace std;

void shiliu(int n)
{
	char m[length];
	int yu;
	int i=0;
	int zancun=n;
	for(i=0;zancun>0;i++)
	{
		yu=zancun % tran_to ;
		if(yu>9)
		{
			m[i]=55+yu;//ascll码表对应字符
		}
		else if(yu<=9)
		{
			m[i]=48+yu;//ascll码表对应字符
		}
		zancun=zancun / tran_to;
	}

	for( ;i>=0;i-- )
	{
		cout<<m[i];
	}
	cout<<endl<<endl;
}


int main()
{
	int n;
	cin>>n;
	shiliu(n);//输出在shiliu函数中
	return 0;
}
