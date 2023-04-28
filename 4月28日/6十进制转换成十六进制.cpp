#include<iostream>
#include<string>
#define length 64

using namespace std;

void shiliu(int n)
{
	char m[length];
	int yu;
	int i=0;
	int zancun=n;
	for(i=0;zancun>0;i++)
	{
		yu=zancun%16;
		if(yu>9)
		{
			m[i]=55+yu;//ascll码表对应字符
		}
		else if(yu<=9)
		{
			m[i]=48+yu;//ascll码表对应字符
		}
		zancun=zancun/16;
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
	shiliu(n);
	return 0;
}
