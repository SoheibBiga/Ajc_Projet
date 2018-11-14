#include "io.h"
#include <iostream>
#include <stdio.h>
using namespace std;


void Io::PrintStudent(const Student& s) const{
  cout << s.Name();
  cout << s.Birthday() << endl;
}

void Io::PrintClass(const Class& c){
  cout << "Nom de la classe : " << c.Name() << " avec "
       << c.MaxNumberOfStudents() << " eleves maximum dans la classe" << endl;
  int nb=c.NumStudents();
  for(int i=0;i<nb;i++){
    PrintStudent(*c.GetStudent(i));
  }
}

Student* Io::EnterStudent(){
  string nom;
  int date;
  cout << "Donner le nom de l'étudiant " << endl;
  cin >> nom;
  do{
  cout << "Donner la date de naissance de l'étudiant de la forme MMDD" << endl;
  cin >> date;
  }while(date<0 || date > 1231);
  return (new Student(nom.c_str(),date));
}

Class* Io::EnterClass(){
  string nom="";
  cout << "Donner le nom de la classe" << endl;
  cin >> nom;
  Class* c = new Class(nom);
  cout << "Donner le nombre d'étudiant à inscrire" <<endl;
  int nb;
  cin >> nb;
  for(int i=0;i<nb;i++){
    Student* s=EnterStudent();
    c->AddStudent(s);
  }
  return c;
}

/*int main(){
  Io* i = new Io();
  Class* c = i->EnterClass();
  i->PrintClass(*c);
  return 0;
}*/

