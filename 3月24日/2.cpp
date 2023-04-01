#include <iostream>
using namespace std;
int main(void){
    double x;
    cin>>x;
    if (x<0){
        cout<<x*x<<endl;
        }
        else if (x>=0 && x<1){
            cout<<x*2.5-1<<endl;
        }
        else{
            cout<<3.0*x - 1 <<endl;
        }
    
    return 0;
}


