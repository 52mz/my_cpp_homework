#include<iostream>
using namespace std;
double  hermite(double x,int n)
{
     if(n==0)
     {
       return 0;  
     }
     else if(n==1)
     {
      return 2*x;   
     }
      else
        return 2.0*x*hermite(x,n-1)-2.0*(n-1)*hermite(x,n-2);
}
int main()
{
    cout<<"先输入X，X>1，再输入N"<<endl;
    double x;
    int n;
    cin>>x>>n;
    cout<<"X"<<"="<<x<<endl<<"N"<<"="<<n<<endl<<endl;
    for(int i=0;i<=n;i++)
    {
       cout<<"H"<<i<<"="<<hermite(x,i)<<endl;
    }
    return 0;
}
