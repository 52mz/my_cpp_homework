#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv){
   float x0,x1,a;
    cout << "输入一个正数：";
    cin>>a;
    if(a<0)
    cout<<a<<"不能开平方";
    else{
    x1=a/2;
    do{
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    while (fabs(x1-x0)>1e-5);
    cout<<a<<"的平方根等于："<<x1<<'\n';
    }
    return 0;
  }
