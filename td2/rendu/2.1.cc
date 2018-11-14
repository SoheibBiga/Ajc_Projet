#include <math.h>

long FactorielleMod(long n){
    long m = pow(10,9)+7;
  if(n==0) return 1;
  return (n*FactorielleMod(n-1))%m;
}
