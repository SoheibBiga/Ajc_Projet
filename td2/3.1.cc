#include <iostream>
using namespace std;

// Ne touchez pas à cette fonction! Utilisez-là telle qu'elle est.
void GetDate(int* year, int* month, int* day) {
  *year = 2017;
  *month = 9;
  *day = 23;
}

int main() {
  // TODO: Utilisez GetDate() pour récuperer la date dans des
  // variables y, m et d de type int.
  int y=0,m=0,d=0;
  GetDate(&y,&m,&d);
  // Affichage de la date.
  cout << y << "-" << m << "-" << d << endl;
}
