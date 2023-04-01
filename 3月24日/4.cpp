#include <iostream>
using namespace std;
int jiecheng(int a )
{
   long int  b ,  c ;
   c = a ;
   for(b=a-1;b>1;b--)
    {
        c = c * b;
    }
          return c;
}
int main(void){
    int n,m=0,p=0;
    cout<<"输入N，计算从1的阶乘到N的阶乘的和"<<endl;
    cin>>n;
    for(m=1;m<=n;m++){
        p=p+jiecheng(m);
    }
    cout<<p;
    return 0;
}


