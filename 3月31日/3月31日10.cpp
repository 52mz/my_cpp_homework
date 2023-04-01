#include<iostream>
using namespace std;
int main(){
int a1 = 1, a2 = 1, n ;
cout<<"计算 n 的阶乘"<<'\n';  
cin>>n;
for(a1=1;a1<=n;a1++)
{
    a2=a1*a2;
}
cout<<a2;
system("pause");
return 0;
}
