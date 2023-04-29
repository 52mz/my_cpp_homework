#include<iostream>
using namespace std;
int shuwei(int a)
{
 int i;
 for(i=0;a>0;i++)
 {
 a=a/10;
 }
 return i;
}
void pai(int l ,int a[])
{
	int b3;
  for(int i=0;i<=l-1;i++ )
  {
    for(int j=i+1,min=a[j]; j<=l-1 ; j++)
	{
	 min=(min<a[j]?min:a[j]);
	 if(min==a[j])
	 b3=j;
	}
   if(a[i]>a[b3])
   {
    a[i]=a[i]+a[b3];
    a[b3]=a[i]-a[b3];
    a[i]=a[i]-a[b3];
   }
  }
}


int main()
{
  int b1,b2,b3,min,b4;
  cin>>b1;
  b2=b1;

 b4=shuwei(b1);

  int a[shuwei(b1)];
  for(int i=0;i<shuwei(b1);i++)
  {
   a[i]=b2%10;
   b2=b2/10;
  }
  


  pai(b4,a);

for(int t=0;t<shuwei(b1);t++)
{
cout<<a[t];

}

  return 0;
}
