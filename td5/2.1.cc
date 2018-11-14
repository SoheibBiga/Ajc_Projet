#include "2.1.h"
#include <iostream>
using namespace std;


Pixel::Pixel(){
}
  
Pixel::Pixel(int x, int y, int color):x_(x),y_(y),color_(color){
}

int Pixel::GetX(){
  return x_;
}
  
int Pixel::GetY(){
  return y_;
}
  
int Pixel::GetColor(){
  return color_;
}

void Pixel::SetX(int x){
  x_=x;
}
  
void Pixel::SetY(int y){
  y_=y;
}
