#include<iostream>
using namespace std;
double zuida(double a , double b ,double c)
{
return c>(a>b?a:b)?c:(a>b?a:b);
}
int main(){
double a,b,c;
cout<<"输入三个数字，我会输出最大值"<<endl;
cin>>a>>b>>c;
cout<<"最大的数字是"<<zuida(a,b,c)<<'\n';
return 0;
}

