#include<iostream>
#include<cmath>
#define AREA(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))

using namespace std;
int main()
{
double a,b,c,m,s;
cin>>a>>b>>c;
s=(a+b+c)/2;
m = AREA(a,b,c,s);

cout<<"三角形的面积是"<<m<<endl;
  return 0;
}
