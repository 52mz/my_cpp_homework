#include<iostream>
#include<cmath>
using namespace std;
int gcd(int n1,int n2)
{
    int n3 , n4 , n5;
    n3=max(n1,n2),n4=min(n1,n2);
   for(;;)//辗转求余法
    {
        n5 = n3 % n4;
        if (n5==0)break;
        n3=n4,n4=n5;
    }
    return n4;//最大公约数   
    
}
int main ()
{
for(;;)
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"the gcd is  "<<gcd(n1,n2)<<endl;
    cout<<"the lcm is  "<<n1*n2/gcd(n1,n2)<<endl;
}
    return 0;
}