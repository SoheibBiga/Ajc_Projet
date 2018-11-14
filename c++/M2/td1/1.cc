#include <iostream>
using namespace std;

int main() {
  cout << "Hello\n";
  int result = 1;
  for (int i = 1; i <= 10; i++) {
    result *= i;
  }
  cout << "Result: " << result << endl;
  return 0;
}
