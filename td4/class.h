#ifndef DEF_CLASS
#define DEF_CLASS
#include "student.h"
#include <string>

class Class{

 private :  
  std::string nom;
  int max;
  Student** liste;
  
 public :
  Class(std::string n);
  std::string Name() const;
  int MaxNumberOfStudents() const;
  int NumStudents() const;
  int AddStudent(Student* student);
  Student* GetStudent(int student_index) const;
  
};

#endif
