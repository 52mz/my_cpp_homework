#include <iostream>
using namespace std;
bool  zhishu(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
    
    for(int a=5;a<1000;a++)
    {
        if(zhishu(a)&&zhishu(a-2))
        {
            cout<<a<<'\t'<<" "<<a-2<<'\t'<<endl;
        }
    }
    return 0;
}