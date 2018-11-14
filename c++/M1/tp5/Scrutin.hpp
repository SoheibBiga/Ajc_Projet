#ifndef SCRUTIN_H
#define SCRUTIN_H
#include "Urne.hpp"

class Scrutin{
public :
  Scrutin(int bur=3,int op=3);
  void resultat();
  //private :
  int nbureau;
  int opvote;
  Urne** tab;
  ~Scrutin();
};
#endif
