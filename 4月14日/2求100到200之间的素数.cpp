#include <iostream>
using namespace std;
bool zhishu (int a)//判定素数，不是素数返回零
{
    for(int i=2;i<a;i++)
    {
    if(a%i==0)
    return false;
    }
    return  true;
}



int main()
{
    int count=0;//计数器，用于统计输出数字量
    for(int n=2;n<200;n++)
    {
        if(zhishu(n) !=0)
        {
        cout<<n<<'\t';
        count++;
        if(count%5==0)
        cout<<'\n';
    	}
        
    }    
    return 0;
}

