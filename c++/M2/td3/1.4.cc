#include <algorithm>
#include <iostream>
using namespace std;

int* SortRev(int num,const int* values){
  int* tab = NULL;
  tab = new int[num];
  for(int i=0;i<num;i++){
    tab[i]=values[i];
  }
  sort(*tab,*tab+num);
  return tab;
}
