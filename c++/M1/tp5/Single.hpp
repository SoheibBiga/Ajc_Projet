#ifndef SINGLE_H
#define SINGLE_H
#include <iostream>

using namespace std;

class Single{
public :
  Single(int n) : x(n){};
  Single(Single&){};
  ~Single(){};
  int get();
  void set(int a);
  static Single * getInstance();
  //private:
  int x;
  static Single* element;
};

ostream& operator<<(ostream& out,Single const& single);
#endif
