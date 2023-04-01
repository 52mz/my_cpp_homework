#include <iostream>
using namespace std;
int main(void){
    int a=100 ;
    double  c , b;
    int n[3];
    for (a=100;a<1000;a=a+1)
    {
        n[0]=a%10;//个位数
        n[1]=(a/10)%10;//十位数
        n[2]=a/100;//白位数
        c = n[0]*n[0]+n[1]*n[1]+n[2]*n[2];
        if((n[0]==n[1] || n[1]==n[2] || n[2]==n[0]) && (c == a/11))
        {
            cout<<a<<endl;
        }
    }
    return 0;
}


