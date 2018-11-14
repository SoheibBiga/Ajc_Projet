#include <math.h>

long FactorielleMod2(long n){
  long m = pow(10,9)+7;
  long res=1;
  for(int i=1;i<=n;i++){
    res=(res*i)%m;
  }
  return res;
}
