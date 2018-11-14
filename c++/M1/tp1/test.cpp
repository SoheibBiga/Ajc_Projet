#include <cstdlib>
#include <iostream>
#include "Point.hpp"

using namespace std;

int main(){
  int x,y;
  cout << "Donner x";
  cin >> x;
  cout << "Donner y";
  cin >> y;
  Point p(x,y);
  p.print();
}
