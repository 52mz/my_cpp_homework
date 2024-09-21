#include <iostream>
#include "point.h"
using namespace std;

int main(void)
{
 int n;
 point test;
 _3D_point test3d;
 pointlist testlist;
 
 while(1){
  cout<<"输入选项 1增2删3改4查5列"<<endl;
  cin>>n;
  switch(n){
  default:cout<<endl;break;
  case 1:testlist.AddPoint();break;
  case 2:testlist.DeletePoint();break;
  case 3:testlist.UpdatePoint();break;
  case 4:testlist.FindPoint();break;
  case 5:testlist.Show();break;
  }
  //break;
  //cin.clear();
 }
 delete &testlist;
 return 0;
} 