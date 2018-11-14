#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Strip(char* s){
  char* tmp = s;
  while(*tmp){
    if(*tmp!=' '){
      *s=*tmp;
      s++;
    }
    tmp++;
  }
  *s=0;
}
