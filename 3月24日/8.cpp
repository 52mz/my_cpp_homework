#include <iostream>
using namespace std;

int  jiecheng(int a )
{ int  b , c=1 ;
    for(b=a;b>1;b--){c=c*b;}
    return c;}
int main(){
    double a1,a2;
    for(a1=0;a1<20.0;a1=a1+1.0)
    {
        a2=a2+1.0/jiecheng(a1);
    }
    cout<<a2;
    system("pause");
    return 0;
}
