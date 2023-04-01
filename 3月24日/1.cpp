#include <iostream>
using namespace std;
int main(void){
    int n , a,b, c;
    a = 0,b = 0;
    cout<<"输入N ，计算从1到N的偶数和"<<endl;
    cin>>n ;
    do{
        a = a + 2;
        b = b + a ;
    }
    while(a<n);
    
    cout<<b<<endl;
    
    return 0;
}
