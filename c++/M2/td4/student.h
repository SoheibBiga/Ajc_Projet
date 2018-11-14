#ifndef DEF_STUDENT
#define DEF_STUDENT

class Student{

 private :  
  const char* nom;
  int date;
  
 public :
  Student(const char* n,int d);
  const char* Name() const;
  int Birthday() const;
};
#endif
