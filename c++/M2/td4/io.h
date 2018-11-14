#ifndef DEF_IO
#define DEF_IO
#include "class.h"
#include <string>

class Io{
 public :
  void PrintStudent(const Student& s) const;
  void PrintClass(const Class& c);
  Student* EnterStudent();
  Class* EnterClass();
};
#endif
