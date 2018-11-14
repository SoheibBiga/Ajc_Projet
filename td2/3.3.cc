#include "3.2.cc"
#include <iostream>
using namespace std;

int main(int argc,char** argv){
  if(argc==2){
    Strip(argv[1]);
    cout << argv[1] << endl;
  }
  return 0;
}
