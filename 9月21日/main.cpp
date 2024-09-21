#include <iostream>
#include "point.h"
using namespace std;

int main(void)
{
 char n;
 pointlist list;
 point test_point;
 _3D_point test_3d_point;
 
 
 for(;1;cin>>n){
  cout<<"选项 a加入d删除u更改f查询s展开"<<endl;//可以更改为输入数字为字母及其对应的功能
  cin>>n;
  switch(n){
  default:cout<<endl;break;
  case 'a':list.AddPoint();break;
  case 'd':list.DeletePoint();break;
  case 'u':list.UpdatePoint();break;
  case 'f':list.FindPoint();break;
  case 's':list.Show();break;
  }
 } 
delete &list;
 return 0;
}