#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(void)
{
    int n1 , n2 , n3 , n4 , n5;
    cout<<"put in two numbers"<<'\n';
    cin>>n1>>n2;
    n3=max(n1,n2),n4=min(n1,n2);
   for(;;)
    {
        n5 = n3 % n4;
        if (n5==0)break;
        n3=n4,n4=n5;
    }
    cout<<"greateat common is  "<<n4<<'\n';//最大公约数
    cout<<"LCM is "<<n1*n2/n4<<'\n';    
    return 0;
}
