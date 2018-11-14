#include "Single.hpp"

Single * Single::element=nullptr;

int Single::get(){
  return x;
}

void Single::set(int a){
  x=a;
}

Single * Single::getInstance(){
  if(element==nullptr){
    element = new Single(0);
  }
  return element;
}

ostream& operator<<(ostream& out,Single const& single){
  cout << "La valeur est " << single.x << endl;
  return cout;
}

  
