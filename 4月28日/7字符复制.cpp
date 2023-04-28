#include<iostream>

using namespace std;
void strcpy(char a[],char b[])//b已经初始化
{
	int length;
	length=sizeof(b)/sizeof(b[0]);
	for(int i=0;i<100;i++)
	{
		a[i]=b[i];
	}
}

int main()
{
	int longof;
	char b[100];
	cout<<"输入不超过100个的字符"<<endl;
	cin>>b;
	longof=sizeof(b)/sizeof(b[0]);
	char a[longof];
	strcpy(a,b);
	cout<<a<<endl;
return 0;
}
