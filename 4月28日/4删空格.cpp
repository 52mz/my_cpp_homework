#include<iostream>
using namespace std;

void del_kong(char ch[],int length)
{
	for(int i=0;i<length;i++)
	{
		if(ch[i]==' ')
		{
			for(int j=i;j<length;j++)
			{
			ch[j]=ch[j+1];
			}
			i--;
		}
	}


}


int main()
{

char str[90];
cin.getline(str,90);
del_kong(str,90);
cout<<endl<<str<<endl;
return 0;
}
