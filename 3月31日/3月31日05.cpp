 #include<iostream>  
using namespace std; 
int main(){ 
	int a1=1 , a2=0 , a3 , count =1;
	while(count<=20)
	{
	a3 = a1+a2;
	cout<<a3<<'\t';
	a1=a2,a2=a3;	
	if(count%5==0)
	{
		cout<<endl;
	}
	 count = count + 1;
	}
	return 0;
}
