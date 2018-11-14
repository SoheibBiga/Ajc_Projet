#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
  srand(time(nullptr));
  int x=rand()%100;
  int y=rand()%100;
  cout <<"les chiffres sont "<<x<<" et "<<y<<"\n Entrer la somme :\n";
  int res;
  cin >> res;
  while(res != (x+y)){
    cout << " Mauvaise réponse, reesayer \n";
    cin >> res;
    
  }
  cout << "Bien joué\n";
  return 0;
  
}
