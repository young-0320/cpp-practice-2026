#include <iostream>
void show(int a);
int main() {
  int a;
  std::cin >> a;
  show(a);
  return 0;
}

void show(int a) {
  std::cout << a << std::endl;
  std::cout << ",    " << static_cast<char>(a) << std::endl;
  std::cout << ",   " << static_cast<char>(toupper(a)) << std::endl;
}