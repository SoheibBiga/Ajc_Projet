#include <cstdlib>
#include <ctime>
#include <iostream>
#include "point.hpp"

using namespace std;

int Point::getx(){
  return x;
}

int Point::gety(){
  return y;
}

void Point::setx(int xx){
  x=xx;
}

void Point::sety(int yy){
  y=yy;
}

void Point::print(){
  cout << "Les coordonnées sont : (" << x << "," << y << ")" << endl;
}

int Point::distance(Point p,Point q)
