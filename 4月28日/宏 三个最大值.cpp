#include<iostream>
#define MAX(a,b,c)  (a>b?a:b)>c?(a>b?a:b):c
using namespace std;
int main()
{
int x,y,z,m;
cin>>x>>y>>z;
m=MAX(x,y,z);
cout<<"最大值是"<<m<<endl;
  return 0;
}
