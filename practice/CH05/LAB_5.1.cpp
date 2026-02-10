#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
  unsigned int s = 0;
  for (unsigned int i = 1; i <= 100; ++i) {
    s += i * i;
  }
  cout << "The sum of squares from 1^2 to 100^ is:  " << s;
  return 0;
}
