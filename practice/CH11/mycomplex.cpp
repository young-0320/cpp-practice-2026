// mycomplex.cpp

#include "mycomplex.h"

double MyComplex::get_magnitude() const { return std::sqrt(x_ * x_ + y_ * y_); }

void MyComplex::show() const {
  using std::cout, std::endl;
  char c;
  c = (y_ > 0) ? '+' : '-';
  cout << "show mycomplex : " << x_ << c << "i" << y_ << endl;
}

void MyComplex::set_value(double a, double b) {
  x_ = a;
  y_ = b;
}
