#include<iostream>
#include<cstring>
#define WIDTH 64
using namespace std;

char *longstr(char *z[] , int n)
{
	char *p;
	int max=strlen(z[0]);
	for(int i=0;i<n ; i++)
	{
		max=(max>strlen(z[i])?max:strlen(z[i]));
		if(max==strlen(z[i]))
		{
			p=z[i];
		}
	}
	return p;
}
int main()
{	
	int n=0 ,i=0;
	char cha[WIDTH][WIDTH] ;
	cout<<"how many sting(no more than 64) ? "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>(*(cha+i));
	}
	
	char *p[WIDTH];
	for(int i=0;i<n;i++)
	{
		p[i]=(*(cha+i));
	}
	cout<<"the longgest strings is "<<endl<<longstr(p,n)<<endl;	
	return 0;
}
