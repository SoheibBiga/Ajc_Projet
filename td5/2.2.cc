#include "2.2.h"
#include <iostream>
using namespace std;


Pixel::Pixel() : color_(0){
}
  
Pixel::Pixel(int x, int y, int color) : x_(x),y_(y),color_(color){
}

const int Pixel::GetX() const{
  return x_;
}
  
const int Pixel::GetY() const{
  return y_;
}
  
const int Pixel::GetColor() const{
  return color_;
}

const void Pixel::SetX(int x){
  x_=x;
}
  
const void Pixel::SetY(int y){
  y_=y;
}
