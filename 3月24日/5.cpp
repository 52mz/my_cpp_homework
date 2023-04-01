#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int a , n , s=0 ,d=1;
    cout<<"分别输入a，n，计算a+a^2+...+a^n"<<endl;
    cin>>a>>n;
    while(d<=n){
        s = s+pow(a,d);
        d++;
    }
	cout<<s;
    return 0;
    }

