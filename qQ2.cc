#include <iostream>

using namespace std;
// File: qQ2.cc
template <typename T> // T is a placeholder for any type
class person {
T age;
public:
person() : age(0) {} // default constructor needed for person<unsigned long> p1;
person(T a) : age(a) {}
T  get_age() const;
void set_age(T a);
};
/* Your code here */

// Template function implementations need template declaration
template <typename T>
T person<T>::get_age() const {
    return age;
}

template <typename T>
void person<T>::set_age(T a) {
    age = a;
}

int main() {
person<unsigned long> p1; // creates person object with unsigned long type for age
p1.set_age(25);
cout << p1.get_age() << endl; // should print 25
return 0;
}
