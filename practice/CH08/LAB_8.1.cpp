#include <iostream>
using std::cout, std::endl, std::cin;

inline double cubic(int);

int main() {
  double sum = 0.0;
  for (int i = 1; i <= 100; ++i) {
    sum += cubic(i);
  }
  cout << "The sum of cubes from 1 to 100 = " << sum;
  return 0;
}
double cubic(int a) {
  double result = 0.0;
  result = a * a * a;
  return result;
}