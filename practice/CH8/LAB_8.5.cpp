#include <cmath>
#include <iostream>
using std::cout, std::endl, std::cin;

int absol(int val);
double absol(double val);

int main() {
  cout << "Enter an integer: ";
  int n;
  cin >> n;
  int int_abs_val = absol(n);

  cout << "Absolute value (int): " << int_abs_val << endl;
  cout << "Enter a floating-point number: ";
  double d;
  cin >> d;
  double dou_abs_val = absol(d);
  cout << "Absolute value (double): " << dou_abs_val << endl;

  return 0;
}
int absol(int val) { return std::abs(val); }
double absol(double val) { return std::abs(val); }
