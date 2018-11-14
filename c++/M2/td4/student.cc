#include "student.h"
#include <iostream>
#include <string.h>
using namespace std;

Student::Student(const char* n,int d) : nom(n),date(d){
}

const char* Student::Name() const{
  char* name=new char();
  return strncpy(name,nom,127);
}

int Student::Birthday() const{
  return(date%10000);
}

/*void Student::Affiche(){
  cout << Name() << endl;
  cout << Birthday() << endl;
}*/

/*int main(){
  char s[5] ="soso";
  Student soheib(s,19950322);
  cout << soheib.Name() << endl;
  cout << soheib.Birthday() << endl;
  }*/
