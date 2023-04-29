#include<iostream>
#include<cmath>
using namespace std;
int p( int n)
{ int i , j = sqrt(n);
	for(i =2;i<j;i++)
		if(i%j==0) return 0;
	return 1;
}

int convert(int n)
{ int m = 0 ;
 while(n>0)
	{
	m=m*10+n%10;
	n=n/10;
	}
return m;
}

int f(int m,int n,int a[])
{
	int i,j=0;
	for(i=m;i<=n;i++)
	
	  if(p(i)&&p(convert(i))) a[j++] = i;
		return j;
	
}

int main()
{ int i,n,a[50];
  n=f(50,150,a);
 for(i=0;i<n;i++) cout<<a[i]<<'\t';
 return 0;
}
