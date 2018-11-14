#include <iostream>
using namespace std;
int x;

int a(int a =8){
  return a+a;
}

class A{
public :
  int a(){
    int a=3;
    for(int a=4;a<20;++a){
      a+=a;
    }
    return a;
  }
  int a(int a=77){
    return a +this->a();
  }
};
class B{
public:
  int a;
};

int main(){
  x=5;
  B b;
  b.a=a();
  A a;
  cout << b.a << endl;
  cout << a.a(20) << endl;
}
