#include<iostream>


using namespace std;
int main()
{
	int i,j,row=0,col = 0, min;
	int a[3][3]={1,-2,0,4,-5,6,2,4 };
	min=a[0][0];
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]<min)
			min=a[i][j];
			row=i;
			col=j;
		}
	}

	cout<<"最小:a["<<row<<"]["<<col<<"]="<<min<<endl;
	return 0;
}


