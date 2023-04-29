#include<iostream>
#define N 64
int Max(int m[])
{
	int max=m[0];
	for(int i=0;i<N;i++)
	{
		max=max>m[i]?max:m[i];
	}
	return max;
}

using namespace std;
int main()
{

	int a[N];
	for(int x=0;x<N;x++)
	{
		cout<<a[x]<<'\t';
		if(x % 8 == 0)
			cout<<endl;
	}

	cout<<"最大"<<Max(a)<<endl;

	return 0;
}
