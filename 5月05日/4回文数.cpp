#include<iostream>
using namespace std;
int f(int n){
    int i=0 , j=0 ,a[10];
    while(n!=0)
    {
        a[j++] = n%10;
        n = n /10;
    }
    j--;
    
    while(j > i)
    {
        if(a[i] == a[j]) i++,j--;
        else   return 0;
        
    }
	return 1;
}

int main()
{
    int m;
    for(m = 11 ; m < 1000 ; m ++ )
    {
        if(f(m)&&f(m*m)&&f(m*m*m))
        	cout<<"m="<<m<<endl<<"m*m="<<m*m<<endl<<"m*m*m"<<m*m*m<<endl;
    }
    
return 0;
}