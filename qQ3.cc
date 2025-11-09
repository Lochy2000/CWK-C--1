#include <iostream>
using namespace std;

class person {
    int age; // private member
    public:
    person(int a = 10) : age(a) {} // constructor with default value of 10
    int  get_age() const; // const means function can't modify the object
};

/* Your code here */
int person::get_age() const {
    return age;
}

int main() {
    person p1; // calls constructor with default value of 10
    cout << p1.get_age() << endl; // should print 10
    /* Your code here */
    p1 = person(25);  // create temporary person object with age 25 and assign to p1
    cout << p1.get_age() << endl; // should print 25
    return 0;
}
