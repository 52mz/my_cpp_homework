#include <iostream>
using namespace std;

int main(void){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3],i,j;
    cout<<"数组 a：\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)	cout<<a[i][j]<<'\t';
        cout<<endl;
    }              
    for(i=0;i<3;i++)
    	for(j=0;j<3;j++) 	b[j][i]=a[i][j];
        cout<<"数组b: \n";
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++) cout<<b[i][j]<<'\t';
         cout<<endl;
     }   
    return 0;
}
