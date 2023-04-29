#include<iostream>
using namespace std;
int zhu(int a[][4])//主对角线
{
	int  sum = 0;
	for(int i = 0; i<=3 ; i ++ )
	{
		sum = sum + a[i][i];
	}
	return sum;
}

int ci(int a[][4])//次对角
{
	int  sum = 0 ;
	for(int i=0 ; i<4 ; i++)
 	{
		sum = sum + a[i][4-i];
	}
	return sum;
}



int main(void)
{
 int  a[4][4];
	 for(int j=0;j<4;j++)
	{
		for(int i=0;i<4;i++)
 		{
 		cin>>a[j][i];
 		}
}


for(int i = 0 ;i<4; i++ )
{
	for(int j = 0 ; j<4 ; j++)
			{
			cout<<a[i][j]<<'\t';
			}
	cout<<endl;
}

cout<<"主对角线的和是"<<zhu(a) <<endl<<"次对角线的和是"<<ci(a)<<endl;

	return 0;
}
