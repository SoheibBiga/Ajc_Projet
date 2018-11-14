#include "class.h"
#include <iostream>
using namespace std;

Class::Class(string n) : nom(n),max(1000){
  liste = new Student* [max];
}

string Class::Name() const{
  return nom;
}

int Class::MaxNumberOfStudents() const{
  return max;
}

int Class::NumStudents() const{
  
}

int Class::AddStudent(Student* student){
  int nb=NumStudents();
  if(nb>=MaxNumberOfStudents()) return -1;
  liste[nb]=student;
  return nb;
}

Student* Class::GetStudent(int student_index) const{
  if(student_index<0 || student_index>=max){
    cout << "L'index de l'étudiant n'est pas correct, il doit être compris entre 0 et " << MaxNumberOfStudents()-1 << endl;
    return NULL;
  }
  return liste[student_index];
}

/*int main(){
  cout << "test";
  //char s[5] ="soso";
  //char* s = "soso";
  //Student soheib(,19950322);
  //soheib.Affiche();
  Class cl("c++");
  cout << cl.AddStudent(&soheib) << endl;
  cl.GetStudent(0)->Affiche();
  return 0;
}*/
