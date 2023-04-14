#include<iostream>
using namespace std;
bool hws(int a)//回文数
{
    int b,c1,d;
    b=a,c1=0;
    while(b>0)
    {
        d=b%10;
        c1=c1*10+d;
        b=b/10;
    }
    if(a==c1)
    return 1;
    else
    return 0;
}
int main(void){
int count=0;
for (int n=1000;n<2000;n++)
{
    if(hws(n))
    {
        cout<<n<<'\t';
        count++;
        if(count%5==0)
        cout<<endl;
    }
}
return 0;
}
//我很佩服我的老师，我自己写过的代码我自己都看不懂了，但是老师可以看懂