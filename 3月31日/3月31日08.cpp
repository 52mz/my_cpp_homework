#include<iostream>
using namespace std;
int main()
{
int n1,n2 ,n3;
for(n1=2;n1<1000;n1++)
{
    n3=0;
    for(n2=1;n2<n1;n2++)//判断因子并且求和
    {       
        if(n1%n2==0)
        {
            n3=n3+n2;
        }
    }

    if(n1==n3)
    {
        cout<<n1<<endl;
    }
}
return 0;
}
