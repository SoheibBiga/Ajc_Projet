#include "Scrutin.hpp"

Scrutin::Scrutin(int bur,int op) : nbureau(bur),opvote(op),tab(new Urne*[nbureau]){
  for(int i=0;i<nbureau;++i) tab[i]= new Urne(*this,i);
}
  
void Scrutin::resultat(){
  int* tot = new int[opvote];
  for(int i=0;i<nbureau;++i){
    for(int j=0;j<opvote;++j){
      tot[j]+=tab[i]->vote[j];
    }
  }
  cout << "Les résultats du votes sont " << endl;
  for(int i=0;i<opvote;++i){
      cout << "Choix " << i << " : " << tot[i] << endl;
    }
}
