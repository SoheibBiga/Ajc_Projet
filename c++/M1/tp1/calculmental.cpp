#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
  srand(time(nullptr));
  int x = rand();
  int y=rand();
  std::cout << x << "+" << y << std::endl;
  int r = 0;
  while(r != x+y){
    std::cin >> r;
    std::cout << "Mauvaise Réponse" << std::endl;
  }
  std::cout << "Bravissimo" ;
