#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Hello\n";
  double sum = 0;
  int N = 100000000;
  for (int i = 1; i < N; i++) {
    sum = sum + 1. / i;
  }
  double gamma = 0.5772156649015328606065120;
  cout << "Harmonic sum: " << sum << endl;
  cout << "Log(N):       " << log(N) << endl;
  cout << "Valeur approchée de la constante d'Euler :   " << sum-log(N) << endl;
  cout << "Valeur du prochain coefficient e: " << (sum-log(N)-gamma)*N << endl;
  return 0;
}
