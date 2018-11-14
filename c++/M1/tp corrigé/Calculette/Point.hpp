#ifndef POINT
#define POINT
class Point{

 public :
  Point(int a,int b){
    x=a;
    y=b;
  }
  int getX();
  void setX(int a);
  int getY();
  void setY(int a);
  void print();
  double distance(Point a);

 private :
  int x;
  int y;
  
};

#endif
