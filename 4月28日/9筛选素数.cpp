#include<iostream>
using namespace std;
void chushihua(int a[])
{
	for(int i=0;i<199;i++)
	{
		a[i]=i+2;
	}
}


int main()
{
int su[199];
int count;

chushihua(su);

for(int i=0;i<199;i++)
{
	count=0;
	for(int j=1;j<=i;j++)
	{
		if(su[i]%j==0)
		{
			count++;
		}
	}

	if(count>=2)
	{
		su[i]=0;
	}
}

for(int i=0;i<199;i++)
{	
	if(su[i]!=0)
	cout<<su[i]<<endl;
}

return 0;
}
