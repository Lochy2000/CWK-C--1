#include <iostream>
using namespace std;
// File: qQ4.cc
/*
The issue is that foo() takes a const reference to my_array_class.
This means get_length() and get() must be const member functions.
*/

class my_array_class {

    size_t len = 3;
    int *a = new int [3]; // dynamically allocate array
    public:
        my_array_class() {
            a[0] = 1;
            a[1] = 2;
            a[2] = 3;
        }
        my_array_class(size_t ln, const int *o) : len(ln), a(new int [ln])
            {
                for (size_t n=0; n<len; ++n) a[n] = o[n];
            }
        ~my_array_class() {  // destructor to free allocated memory
            delete[] a;
        }
        size_t get_length() const { // added const qualifier
            return len;
        }
        int get(size_t n) const { // added const qualifier
            return a[n];
        }
        int set(size_t n, int v) {
            int tmp = a[n];
            a[n] = v;
            return tmp;
        }
};


void foo( const my_array_class & a2, size_t i ) {
   if (i < a2.get_length())
     std::cout <<  a2.get(i) << std::endl;
}

int main() {
  int zero12[] = {13, 1, 2};
  my_array_class a1(3, zero12);
  foo(a1, 0); // should print 13
  return 0;
}
