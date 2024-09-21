#include <iostream>
#include "point.h"


point::point(void){}//std::cout<<"进了point构造函数"<<std::endl;};
void point::setX(double xx){x = xx;};
void point::setY(double yy){y = yy;};
double point::getX(){return x;};
double point::getY(){return y;};


_3D_point::_3D_point(void){}//std::cout<<"进了_3D_point构造函数"<<std::endl;};
void _3D_point::setZ(double zz){z =zz;};
double _3D_point::getZ(){return z;};

void pointlist::DeletePoint(){
 int station;
 std::cout<<"输入需要删除的点编号"<<std::endl;std::cin>>station;size--;//输入删除点的序号，同时size减一
 for(int i=station;i<size-1;i++){
  *(p+i)=*(p+i+1);
 }
};

void pointlist::UpdatePoint(){
 double xx,yy,zz;int no=0 ;std::cin>>xx,yy,zz;
 std::cout<<"输入要更改的点序号"<<std::endl;
 std::cin>>no;
 std::cout<<"输入点信息 输入格式为x,y,z"<<std::endl;
 (p+no)->setX(xx),(p+no)->setY(yy),(p+no)->setZ(zz);//使用接口更新信息
 };

void pointlist::FindPoint(){
 double find;
 std::cout<<"输入需要查询的坐标值"<<std::endl;
 std::cin>>find;
 for(int i=0;i<size;i++){
  if((p+i)->getX()==find || (p+i)->getX()==find || (p+i)->getX()==find){
  std::cout<<"NO."<<i<<"x="<<(p+i)->getX()<<"y="<<
  (p+i)->getY()<<"z="<<(p+i)->getZ()<<std::endl;
  };
 }
};

void pointlist::AddPoint(){
 double xx,yy,zz;char judg='n';

 if(0){
 _3D_point *space,*name;
 space = new _3D_point[size+80];//申请新空间
  for(int i=0;i<size;i++){
  *(space+i)=*(p+i);
  }
 name = p;
 p = space;
 delete [] name;//释放老空间
 }

 else{
  std::cout<<"输入点信息 输入格式为x y z"<<std::endl;
  std::cin>>xx>>yy>>zz;
  (p+size)->setX(xx),(p+size)->setY(yy),(p+size)->setZ(zz),size++;
 }
};

void pointlist::Show(){
 for(int i=0;i<size;i++){
  std::cout<<"NO."<<i<<"x="<<(p+i)->getX()<<"y="<<
  (p+i)->getY()<<"z="<<(p+i)->getZ()<<std::endl;
 }
};

pointlist::pointlist(){size=0;}