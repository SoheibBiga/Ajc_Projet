#include <iostream>
using namespace std;

class B;
class A{
public:
  void f(){cout << "A::f()"<<endl;}
  void g(){cout << "A::g()"<<endl;}
  virtual void h(){cout << "A::h()"<<endl;}
  void k(int i){cout << "A::k(int)"<<endl;}
  virtual void l(A *a){cout << "A::l(A*)"<<endl;}
  virtual void l(B *a){cout << "A::l(B*)"<<endl;}
};

class B: public A{
public :
  void f(){cout << "B::f()"<<endl;}
  virtual void h(){cout << "B::h()"<<endl;}
  void k(char c){cout << "B::k(char)"<<endl;}
  virtual void l(B *a){cout << "B::l(B*)"<<endl;}
};

int main(){
  A* a = new A;
  B* b = new B;
  A* ab = new B;
  cout<< "appels de f()";
  cout <<endl;
  a->f();
  b->f();
  ab->f();
  cout<< "appels de g()";
  cout <<endl;
  a->g();
  b->g();
  ab->g();
  cout<< "appels de h()";
  cout <<endl;
  a->h();
  b->h();
  cout<< "appels de k(--)";
  cout <<endl;
  //ab->k(’a’);
  //b->k(2);
  //ab->k('a');
  cout<< "appels de l(--)";
  cout<<endl;
  a->l(a);
  a->l(b);
  a->l(ab);
  //b->l(a);
  b->l(b);
  //b->l(ab);
  ab->l(a);
  ab->l(b);
  ab->l(ab);
  return 0;
}
