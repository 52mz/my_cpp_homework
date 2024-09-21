#ifndef _POINT_
#define _POINT_

//可以更改声明函数变量的顺序
//改声明的名字也可以，记得去point.cpp文件里吧对应的名称也改了
class point{
 public:
 point();
 void setX(double xx);
 double getX();
 void setY(double yy);
 double getY();
 private:
 double x,y;
};

class _3D_point:public point{
 public:
 _3D_point();
 void setZ(double zz);
 double getZ();
 private:
 double z;
};

class pointlist{
 public:
 _3D_point *p=new _3D_point[80];//申请一块空间
 void DeletePoint();
 void UpdatePoint();//修改第no个点坐标
 void FindPoint();
 void AddPoint();
 void Show();
 pointlist();
 private:
 int size;
};

#endif