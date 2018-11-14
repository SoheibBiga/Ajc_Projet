#include <iostream>
#include <sys/resource.h>
using namespace std;

#include "2.1.cc"
#include "2.4.cc"
#include "2.5.cc"
#include "2.6.cc"

int main() {
  /*struct rlimit r;
  getrlimit(RLIMIT_STACK, &r);
  r.rlim_cur = 1000 << 20;  // 100 MB.
  setrlimit(RLIMIT_STACK, &r);
  cout << "Entrez un entier n: ";
  long n;
  cin >> n;
  cout << FactorielleMod(n) << endl;
  for(int i=0; i<50;i=i+4){
    cout << FiboRec(i) << endl;
    cout << FiboIter(i) << endl;
  }
  cout << FiboIter(1000) << endl;*/
  cout << Pgcd(2250,1000) << endl;
  cout << Pgcd(129387194869817412L, 19827398170419240L) << endl;
}
