#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
  cout << endl
       << "Multiplication Table" << endl
       << "----------------------------------------------------" << endl;
  for (int i = 1; i < 10; ++i) {
    for (int j = 1; j < 10; ++j) {
      cout << i << "x" << j << "=" << i * j << "\t";
    }
    cout << endl;
  }

  return 0;
}