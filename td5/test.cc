#include <cstdlib>
#include <iostream>
using namespace std;
#include "3.1.h"

/*struct Element{
    double value;
    Element* prev;
    Element* next;
};
void affiche(Element* e){
  cout << "Me " << e << endl;
  cout << e->value << endl;
  cout << "Prev " << e->prev << endl;
  cout << "Next " << e->next << endl;
}
void init(Element* e,int a,Element* f,Element* g){
  e->value=a;
  e->prev=f;
  e->next=g;
}*/

int* l(int*n){
  return n;
}

int main(){
  /*List l;
  using Element = List::Element;
  Element* e= new Element();
  Element* f= new Element();
  //init(e,4,nullptr,nullptr);
  //init(f,5,e,f);
  //affiche(e);
  //affiche(f);
  e->next=f;
  //cout << (e->next==nullptr) << endl;
  
  l.element=e;
  cout << l.NumElements() << endl;
  cout << l.Head();*/
  int* l = new int(3);
  
  cout << *l << endl;
}

/*int NumElements();
  List::Element* Head();
  void Remove(Element* element);
  Element* InsertNewElementAfter(double value, Element* position);*/
