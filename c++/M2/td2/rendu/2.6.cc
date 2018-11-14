#include <iostream>
using namespace std;

long Pgcd(long a,long b){
  long m=a;
  long n=b;
  if(a<b){
    m=b;
    n=a;
  }
  long r=m%n;
  if(r==0) return n;
  else return Pgcd(n,r);
}
