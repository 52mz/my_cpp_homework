#include<iostream>
#define MAX(a,b)  (a>b?a:b)
using namespace std;
int main()
{
int x,y,m;
cin>>x>>y;
m=MAX(x,y);
cout<<"最大值是"<<m<<endl;
  return 0;
}
