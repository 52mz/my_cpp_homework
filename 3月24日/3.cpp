#include <iostream>
using namespace std;
int main(void){
    int a , b , c ,d,count;
    cout<<"输入一个数字，输出他的位数，计算各位数的和"<<endl;
    cin>>a;
    b=a,c=0,d=0,count=0;
    //中间变量
    while(b>0){
      c =  b%10;
      cout<<c<<endl;
      b=b/10;
      d = d + c;
      count++;
    }
    cout<<"共有"<<count<<"位数"<<endl;
    cout<<"位数和"<<d<<endl;
    
    
    return 0;
}


