#include<iostream>
using namespace std;
int  nixushu(int c)
{
    int a=0;
    for(;c>0;c=c/10)
    {
        a = a*10+c%10;
    }
    return a;
}
int main()
{
    for(;;)//连续输出所用死循环
    {
    int a;
    cin>>a;
    cout<<"original is "<<a<<endl<<"inverse number is "<<nixushu(a) <<endl <<endl;
    }
    return 0;
}

