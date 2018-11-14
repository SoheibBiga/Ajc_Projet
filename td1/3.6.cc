#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long a;
  cout << "Entrez le nombre et appuyez sur [Enter]: ";
  cin >> a;
  long long dec=a;
  long long i=2;
  while(dec!=1){
    i=2;
    while(dec%i!=0) i++;
    dec/=i;
    cout << i << "\n";
  }
  return 0;
}
