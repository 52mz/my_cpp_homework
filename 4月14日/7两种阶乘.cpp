#include<iostream>
using namespace std;
int xh(int a)//循环
{
    int n=1;
    for(int i=1;i<=a;i++)
    {
        n=n*i;
    }
    return n;
}
int dg(int a)
{
    if(a==0||a==1)
    return 1;
    else
    return a*dg(a-1);
}

int main(void)
{
    int a ;
    cin>>a;
    cout<<xh(a)<<endl;
    cout<<dg(a)<<endl;
    system("pause");
    return 0;
}


