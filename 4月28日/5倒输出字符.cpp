#include<iostream>
#include<cstring>
using namespace std;
void daoxu(char chr[])
{
	char cht[81];
	strncpy(cht,chr,strlen(chr));

	for(int i=0;i<strlen(chr);i++)
	{
		chr[i]=cht[strlen(chr)-1-i];
	}
}


int main()
{
char name[81];
cin.getline(name,81);
//cout<<strlen(name)<<endl;
daoxu(name);
cout<<name<<endl;
return 0;
}
