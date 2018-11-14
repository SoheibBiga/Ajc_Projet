#include "Single.hpp"
#include "Urne.hpp"
#include "Scrutin.hpp"
using namespace std;

int main(int argc,char* argv[]){
  /*Single * s1 = Single::getInstance();
  Single s2 = *s1;
  cout << *s1 << s2 << endl;*/
  Scrutin s;
  s.tab[0]->vote[0]++;
  s.tab[1]->vote[2]++;
  s.resultat();
}
