#include<iostream>
#define length 100  //定义字符数组长度
using namespace std;

void strcat(char a[],char b[])
{
	int count=0,j=0;
	char c[length];
	for(int i=0;i<length;i++)
	{
		if(a[i]!='\0')
		{ 
			count++;
		}
		else
		{
			break;
		}
	}

	for(int i=count;i<length;i++)
	{
		a[i]=b[j];
		j++;
	}
}

int main()
{
	char a[length],b[length];
	cin>>a;
	cin>>b;
	strcat(a,b);
	cout<<a;	
	return 0;
}
