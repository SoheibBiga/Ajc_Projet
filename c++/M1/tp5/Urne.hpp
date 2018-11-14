#ifndef URNE_H
#define URNE_H
#define URNE_H

#include <iostream>
using namespace std;
class Scrutin;

class Urne{
public :
  Urne(Scrutin& s,int numbu);
  ~Urne();
  bool voter(int choix);
  void resultat();
  //private :
  Scrutin& scrutin;
  int numbu;
  int* vote;
};
#endif
