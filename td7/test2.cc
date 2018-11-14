#include <iostream>

using namespace std;

struct A {
  int x;
};
struct B {
  int* x;
};
struct C {
  static int x;
};
struct D {
  int& x;
};
struct E {
  bool& x;
};
struct F {
  bool x,y,z,d,e,r,f,t,k;
};
struct G {
  int** x;
};


int main(int argc, char** argv){

  cout << sizeof(struct A) << endl
	   << sizeof(struct B) << endl
	   << sizeof(struct C) << endl
	   << sizeof(struct D) << endl
	   << sizeof(struct E) << endl
	   << sizeof(struct F) << endl
	   << sizeof(struct G) << endl;
}
