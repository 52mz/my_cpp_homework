#include<iostream>
#include <cmath>
using namespace std;


int main()
{
	int i;		
	double t;
	double flag = 1.0;	 
	double sum = 0;

	i = 1;
	
	do
	{
		t = flag / i;		
		i = i + 2;
		flag = -flag;
        sum = sum + t ;
	}while(fabs(t) >= 1E-6);

	cout << "PI = " << 4 * sum << endl;

	return 0;
}