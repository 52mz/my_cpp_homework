//求矩阵鞍点
#include<iostream>
using namespace std;
int main()
{
	int jz[3][4],r=0,c=0,max,temp;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<4;++j)
		{
			cin>>jz[i][j];
		}
	}//输入3*4的矩阵 
	for(int i=0;i<3;++i)
	{
		max=jz[i][0];
		temp=0;
		for(int j=0;j<4;++j)
		{
			if(jz[i][j]>max)
			{
				max=jz[i][j];
				c=j;
				r=i;//取行中最大的数，并记录行数和列数 
			}
		}
		for(int j=0;j<3;++j)
		{
			if(jz[j][c]<max)
			{
				++temp;
			}
		}
		if(temp==0)//判断是否为该列最小的数 
		{
			cout<<"there is a an-dian a"<<"["<<r<<"]"<<"["<<c<<"]"<<"="<<jz[r][c]<<endl;
			return 0;
		}
	}
	cout<<"there is no an-dian"<<endl;
	return 0;
}


