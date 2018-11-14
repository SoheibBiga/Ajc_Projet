#include "3.1.h"
#include <iostream>
using namespace std;

int List::NumElements(){
  Element* s =Head();
  if(s==nullptr) return 0;
  int i=1;
  while(s->next!=nullptr){
    //cout << s->next->value << endl;
    s=s->next;
    i++;
  }
  return i;
}
  
List::Element* List::Head() const{
  Element* e= element;
  if(e==nullptr) return nullptr;
  while(e->prev!=nullptr) e=e->prev;
  return e;
}

List::Element* List::Tail() const{
  Element* e= element;
  if(e==nullptr) return nullptr;
  while(e->next!=nullptr) e=e->next;
  return e;
}


void List::Remove(Element* elem){
  Element* s =Head();
  if(s!=nullptr){
    while(s!=elem && s->next!=nullptr){
      s=s->next;
    }
  }
  if(s!=elem) cout << "L'element n'as pas été trouvé" << endl;
  else{
    if(s->prev==nullptr && s->next==nullptr) element=nullptr;
    else{
      if(s->prev==nullptr) s->next->prev=nullptr;
      if(s->next==nullptr) s->prev->next=nullptr;
      if(s->prev!=nullptr && s->next!=nullptr){
	s->next->prev=s->prev;
	s->prev->next=s->next;
      }
    }
  }
}
				  
List::Element* List::InsertNewElementAfter(double value, Element* position){
  Element* n = new Element();
  n->value=value;
  n->prev=nullptr;
  n->next=nullptr;
  Element* s =Head();
  if(s==nullptr){
    element=n;
    return n;
  }
  if(position==nullptr){
    s->prev=n;
    n->next=s;
    return n;
  }
  while(s!=position && s->next!=nullptr){
    s=s->next;
  }
  if(s->next!=nullptr){
    s->next->prev=n;
    n->next=s->next;
  }
  s->next=n;
  n->prev=s;
  return n;
}
  
List::Element* List::Find(double d){
  Element* s =Head();
  if(s==nullptr) return nullptr;
  while(s->value!=d && s->next!=nullptr){
    s=s->next;
  }
  if(s->value!=d) return nullptr;
  return s;
}

List::Element* List::InsertElementAfter(Element* n, Element* position){
  if(n==nullptr) return nullptr;
  Element* s =Head();
  if(s==nullptr){
    element=n;
    return n;
  }
  if(position==nullptr){
    s->prev=n;
    n->next=s;
    return n;
  }
  while(s!=position && s->next!=nullptr) s=s->next;
  if(s->next!=nullptr){
    s->next->prev=n;
    n->next=s->next;
  }
  s->next=n;
  n->prev=s;
  return n;
}

void List::InsertListAfter(const List* other, Element* position){
  if(position==nullptr) InsertElementAfter(other->Tail(),Head());
  else{
    Element* s =Head();
    if(s==nullptr) element=other->Head();
    else{
      while(s!=position && s->next!=nullptr) s=s->next;
      if(s==position && other->Head()!=nullptr && other->Tail()!=nullptr){
	other->Head()->prev=s;
	other->Tail()->next=s->next;
	if(s->next!=nullptr) s->next->prev=other->Tail();
	s->next=other->Head();
      }
    }
  }
}
