#include <iostream>
using namespace std;

class A {
public:
  virtual void f() const { cout << "A::f" << endl; }
  void g() const { cout << "A::g" << endl; }
};

class B : public A {
public:
  void f() const { cout << "B::f" << endl; }
  virtual void g() const { cout << "B::g" << endl;}
};

class C : public B {
public:
  //void f() const { cout << "C::f" << endl; }
  //void g() const { cout << "C::g" << endl;}
};

class D : public B {
public:
  void f() const { cout << "D::f" << endl; }
  void g() const { cout << "D::g" << endl;}
};

class E : public C {
public:
  //void f() const { cout << "D::f" << endl; }
  void g() const { cout << "E::g" << endl;}
};

int main() {
  cout << "---- 1 ----" << endl;
  A *a=new A();
  a->f(); // A::f()
  a->g(); // A::g()
  cout << "---- 2 ----" << endl;
  A *b=new B();
  b->f(); // B::f()
  b->g(); // A::g()
  cout << "---- 3 ----" << endl;
  B *c=new C(); // le type de la variable est `a compl ́eter
  c->f(); // B::f()
  c->g(); // B::g()
  cout << "---- 4 ----" << endl;
  B *d=new D();
  d->f(); // D::f()
  d->g(); // D::g()
  cout << "---- 5 ----" << endl;
  A *e=new E(); // avec E h ́erite de C
  e->f(); // B::f()
  ((B *)e)-> g(); // ajoutez un cast de e vers B pour obtenir E::g()
}
