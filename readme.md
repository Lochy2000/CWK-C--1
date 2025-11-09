# INM359 Object-Oriented Programming in C++

## 2025-26 Coursework-1

**To be done individually**
Don't "help" others – they can help themselves by studying the relevant material

---

## Contents

- [Setting Up](#setting-up)
- [Standalone Questions](#standalone-questions)
  - [Session 2 – Classes in C++ & Session 4 – Genericity, Containers](#session-2--classes-in-c--session-4--genericity-containers)
  - [Session 3 – Overloading](#session-3--overloading)
- [Attention to detail – Submitting](#attention-to-detail--submitting)
- [Marking](#marking)

---

## Setting Up

First, make sure you have a proper (command line-based) environment to develop and test your code. Use whichever IDE you want but your code **MUST work with g++ version >=14** and the Makefile described in the following instructions.

Detailed instructions for installing a proper command-line environment are available at:
https://www.staff.city.ac.uk/c.kloukinas/cpp/00-setup/cpp-command-line-environment-setup.html

**You need to use and submit the Makefile from the above instructions!**

---

## Standalone Questions

### Session 2 – Classes in C++ & Session 4 – Genericity, Containers

#### Q1. [3 marks]

Consider the following code. Fix the yellow parts, without modifying the parts in grey, so that the code compiles and runs correctly.

```cpp
#include <iostream>
using namespace std;    // File: qQ1.cc

class person {
  int age;
 public:
  person(int a = 10) : age(a) {}
  int  get_age() const;
  void set_age(int a);
};

/* Your code here */
//
//
//

int main() {
  person p1;
  p1.set_age(25);
  cout << p1.get_age() << endl; // should print 25
  return 0;
}
```

---

#### Q2. [4 marks]

Consider this generic person class variant. Fix the yellow parts, without modifying the parts in grey, so that the code compiles and runs correctly.

```cpp
#include <iostream>
using namespace std;    // File: qQ2.cc

template <typename T>
class person {
  T age;
 public:
  //
  person(T a) : age(a) {}
  T  get_age() const;
  void set_age(T a);
};

/* Your code here */
//
//
//

int main() {
  person<unsigned long> p1;
  p1.set_age(25);
  cout << p1.get_age() << endl; // should print 25
  return 0;
}
```

---

#### Q3. [3 marks]

Now consider this final person class variant. Complete the main so that it prints 25 after having printed 10, without adding more methods to class person or changing the visibility of its members.

```cpp
#include <iostream>
using namespace std;    // File: qQ3.cc

class person {
  int age;
 public:
  person(int a = 10) : age(a) {}
  int  get_age() const;
};

/* Your code here */

int main() {
  person p1;
  cout << p1.get_age() << endl; // should print 10
  /* Your code here */
  cout << p1.get_age() << endl; // should print 25
  return 0;
}
```

---

#### Q4. [1 mark]

Consider the following use of class `my_array_class`. Fix the code in the class so that the greyed-out code compiles and runs correctly.

**Note:** You should not modify any of the code in grey.

```cpp
#include <iostream>
using namespace std;    // File: qQ4.cc
```