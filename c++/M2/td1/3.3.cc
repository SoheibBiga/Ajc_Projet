#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long a;
  bool is_prime=true;
  cout << "Entrez le nombre et appuyez sur [Enter]: ";
  cin >> a;
  for(long long i=2;i<=sqrt(a);i++){
    if(a%i==0) {
      is_prime=false;
      break;
    }
  }
  if(is_prime) cout << "premier";
  else cout << "composite";
  cout << "\n";
  return 0;
}
