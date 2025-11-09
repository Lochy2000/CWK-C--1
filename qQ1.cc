#include <iostream>

using namespace std;    // File: qQ1.cc

class person {
  int age; // private data member
 public:
  person(int a = 10) : age(a) {}

  int  get_age() const;  // member functions declared here

  void set_age(int a);
};

/* Your code here */
// Implementation of get_age using scope resolution operator
int person::get_age() const {
  return age; // const means this function won't modify the object
}

// Implementation of set_age
void person::set_age(int a) {
  age = a;
}

int main() {
  person p1;
  p1.set_age(25);
  cout << p1.get_age() << endl; // should print 25
  return 0;
}
