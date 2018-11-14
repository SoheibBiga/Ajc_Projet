class Hello {

public:
  Hello(): x_(42){}

  //W:reference to temporary
  const int& Return42_0(){return 42;} 
  const int& Return42_1() const {return 42;}
  //E: binding non-const lvalue to reference
  int& Return42_2(){return 42;} 
  int& Return42_3() const {return 42;}
  //Valid
  int Return42_4(){return 42;}
  int Return42_5() const {return 42;}
  const int& Return42_6(){return x_;}
  const int& Return42_7() const {return x_;}
  //E: conversion int* to int
  const int& Return42_8(){return &x_;}
  const int& Return42_9() const {return &x_;}
  //E: binding rvalue to int&
  int& Return42_A(){return &x_;}
  int& Return42_B() const {return &x_;}
  //Valid
  int Return42_C(){return x_;}
  int Return42_D() const {return x_;}
  //E: binding non-const lvalue to reference of type int&
  int& Return42_E(){return x_+0;}
  int& Return42_F() const {return x_+0;}
  //Valid
  int& Return42_G(){return x_;}
  //E: binding reference of type 'int&' to 'const int' discards qualifiers
  int& Return42_H() const {return x_;}

private:
  int x_;
};
