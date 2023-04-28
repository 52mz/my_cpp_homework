#include<iostream>
using namespace std;
int main(void)
{
 int a[8][8];
 for(int i = 0 ; i <= 7 ; i ++ )// 数组初始化
 { 
	 for(int j = 0 ; j <= 7 ; j++)
	 {
	 a[i][j] = 0 ;

	if(i==j||j==0 )
	 a[i][j] = 1;
 	}
 }

 for(int n=2 ; n <= 7 ; n++)
 {
   for(int m=1 ; m <= n-1 ; m++)
	    {
	    a[n][m]=a[n-1][m-1] + a[n-1][m];
	    }
 
 } 

for(int i = 0 ; i <= 7 ; i ++ )
{
for(int j = 0 ; j<=7 ; j++)
	 {
	 cout<<a[i][j]<<'\t';
	 }
cout<<endl;
}

return 0;
}
