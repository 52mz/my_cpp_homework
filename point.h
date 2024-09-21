#ifndef _POINT_
#define _POINT_
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