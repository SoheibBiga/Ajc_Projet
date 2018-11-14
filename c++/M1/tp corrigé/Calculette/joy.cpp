
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){
cout << "Comment vous apellez vous \n";
string name;
cin >>name;
if(name.compare("joy\n")){
cout << "vous êtes vraiment charmantes ta pas un ptit 06 ?";
string answer;
cin >> answer;
while(answer.compare("0687968112\n")!=0){
if(answer.compare("non\n"))
  cout << "vas y donne fais pas ta connasse\n";

 else if(answer.compare("va te faire foutre\n"))
   cout << "d'ou tu parle comme sa donne le num\n";

 else if(answer.compare("un bisous d'abord\n"))
   cout <<"sa me plais mais je ne suis pas achetable\n";
 else
   cout << "mytho va, ta cru t'allai m'arnaquer\n";
cin >> answer;
}
cout << "merci mdame je vais maintenant vous harceler de bisous et de message, on se revoit dans le noctilien\n";
}
 else if(name.compare("lucas\n"))
   cout << "t'es le meilleur mon pote\n";
 else if(name.compare("thommas\n"))
   cout << "tu vas mourrir";
 else
   cout <<  " tu sers à rien dégage";

	   
    
  
}
