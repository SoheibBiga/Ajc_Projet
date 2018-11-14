#include "io.h"
#include "student.h"
#include "class.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  Io* i = new Io();
  Class* c = i->EnterClass();
  i->PrintClass(*c);
  return 0;
}
