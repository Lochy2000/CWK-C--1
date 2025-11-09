#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <exception>

using namespace std;        // File: qQ7.cc

class m2dvector {

  vector<int> vi = {0, 0};

 public:
  m2dvector(vector<int> some_vi) : vi(some_vi) {
    if (some_vi.size() > 2)
        throw invalid_argument("Input vector should have size 2.");
    }
  const vector<int> & get_data() const {

    return vi;
}

};
/* Put your code here */
// Overload output operator to print in format <x y>
ostream& operator<<(ostream& os, const m2dvector& m2d) {
    os << "<" << m2d.get_data()[0] << " " << m2d.get_data()[1] << ">";
    return os;
}

// Overload input operator to read in format <x y>
istream& operator>>(istream& is, m2dvector& m2d) {
    char c;
    int x, y;
    is >> c >> x >> y >> c; // reads '<', x, y, '>' (>> skips whitespace)
    m2d = m2dvector({x, y});
    return is;
}


int main() {
  try {
    vector<int> vi = {11, 12, 13, 14, 15};
    m2dvector z1({vi[0], vi[1]});
    m2dvector z2({vi[3], vi[4]});

    cout << z1 << endl; /* should print: <11 12> */

    cout << z2 << endl; /* should print: <14 15> */

    string s1 = "<11 12>    <13 14>a"; /* s1 is a *single* test – code
                                          must work in general */
    istringstream iss(s1);
    iss >> z2 >> z1;
    cout << z1 << endl; /* should print: <13 14> */
    cout << z2 << endl; /* should print: <11 12> */

    char c;

    iss >> c; cout << c << endl; /* should print 'a' – the char after
    the 2nd m2dvector above. */

    ostringstream oss;

    oss << z2;
    string so = oss.str();
    for ( char c : so )
    if (c == '\n') {cout << "Output contains a newline\n"; return 0;}
    cout << "Output does not contain a newline\n";
    } catch (...) { throw; }
return 0;
}
