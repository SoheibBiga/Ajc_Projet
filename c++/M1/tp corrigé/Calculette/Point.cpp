#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Point.hpp"
#include <cmath>

using namespace std;

int Point::getX(){
  return x;
}
  
void Point::setX(int a){
  x=a;
}
  
int Point::getY(){
  return y;
}
  
void Point::setY(int a){
  y=a;
}
  
void Point::print(){
  cout << "x = "<<x<<" "<<"y= "<<y<<"\n";
}

double Point::distance(Point a){
  return sqrt((this->x-a.x)*(this->x-a.x)+(this->y-a.y)*(this->y-a.y));
}

