#include<iostream>
using namespace std;
void hthemax(int l,int b,double a[][100])
 {
  double max ,min;
  int maxh,maxl;
  int maxhang ,maxlie ,minhang ,minlie; 
  for(int i=0; i<l;i++)
	   {
	    max=0;   
	    for(int j = 0 ; j < b; j++)
		     {
		     max =( max>a[i][j] ? max : a[i][j]);
		     if(max==a[i][j])
			{
			maxl=j;
			}
		      
		     }	     
	min = max ;
	for(int minl=0;minl<b;minl++)
	{
	min = min<a[minl][maxl]?min:a[minl][maxl];
	}
	if(min==max)
	cout<<endl<<"鞍数为"<<min<<'\t'<<endl;
	 }

 }
 
 
 
 



int main(void)
{
int l , b;
cout<<"先输入数组长度，在输入宽度(不超过100)"<<endl;
cin>>l>>b;
double arry[100][100];
for(int i=0; i<l ; i++ )
	 {
	 for(int j=0 ; j<b ; j++)
		   {
		  cin>>arry[i][j];
		  }
	 }

 
for(int i=0; i<l ; i++ )
	 {
	 for(int j=0 ; j<b ; j++)
		   {
		  cout<<arry[i][j]<<'\t';
		  
		  }
	 cout<<endl;
	 }

hthemax(l,b,arry);

 return 0;
}
