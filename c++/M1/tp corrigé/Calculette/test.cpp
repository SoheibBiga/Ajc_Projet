#include "Point.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){

  Point p(2,0);
  p.print();
  Point p2(0,0);
  cout << p.distance(p2)<<"\n";
  return 0;
}
