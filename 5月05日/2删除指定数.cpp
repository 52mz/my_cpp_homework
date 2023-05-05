#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1,3,5,7,9,11},i,j,x;
    cout<<"原数组是:\n" ;
    for(i=0;i<6;i++){	cout<<a[i]<<'\t';	}
        
     cout<<"\n 要删掉哪个数字："   ;
     cin>>x;
     for(i=0;i<6;i++)
     {
         if(a[i] == x)
         {
             for (j = i ;j<5;j++)
             	a[j]=a[j+1];
             break;    
         }
     }
    if(i==6)
    	cout<<"无该数据\n";
     else
        {
            cout<<"删除数字"<<x<<"后的数组是:"<<endl;
            for(i=0;i<5;i++)
            cout<<a[i]<<'\t';
            cout<<endl;
        }
    return 0;
}

