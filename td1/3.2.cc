#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  cout << "Entrez le premier nombre et appuyez sur [Enter]: ";
  cin >> a;
  cout << "Entrez le deuxieme nombre et appuyez sur [Enter]: ";
  cin >> b;
  if(a%b==0) cout << "est divisible";
  else cout << "n'est pas divisible";
  cout << "\n";
  return 0;
}
