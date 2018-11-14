#include <iostream>
using namespace std;
class B {
public:
string f() const { return g() + " by f() in B"; }
virtual string g() const { return "g() in B"; }
};
class D : public B {
public:
string f() const { return g() + " by f() in D"; }
virtual string g() const { return "g() in D"; }
};
int main() {
cout << B().f() << endl;
cout << B().g() << endl;
cout << D().f() << endl;
cout << D().g() << endl;
cout << ((B) D()).f() << endl;
}
