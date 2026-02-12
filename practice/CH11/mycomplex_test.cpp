// mycomplex_test.cpp
// main

#include "mycomplex.h"
using namespace std;

int main() {
  MyComplex a(3, 4);
  MyComplex b(1, 2);

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;

  cout << "a * 2 = " << a * 2 << endl;
  cout << "2 * b = " << 2 * b << endl;

  cout << "|a| = " << a.get_magnitude() << endl;

  a.set_value(10, 5);
  cout << "After set_value: a = " << a << endl;

  return 0;
}