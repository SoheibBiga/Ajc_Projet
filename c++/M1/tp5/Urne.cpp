#include "Urne.hpp"
#include "Scrutin.hpp"

Urne::Urne(Scrutin& s,int n) : scrutin(s),numbu(n),vote(new int[scrutin.opvote]){}

bool Urne::voter(int choix){
  if(choix<scrutin.opvote) return false;
  vote[choix]++;
  return true;
}

void Urne::resultat(){
  cout << "Les résultats du votes pour le bureau " << numbu << " sont " << endl;
  for(int i=0;i<scrutin.opvote;++i){
    cout << "Choix " << i << " : " << vote[i] << endl;
  }
}

Urne::~Urne(){
  delete vote[];
}
