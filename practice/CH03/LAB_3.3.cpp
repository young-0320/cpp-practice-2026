#include <iostream>
void show(int a);
int main() {
  int num;
  std::cin >> num;
  show(num);
  return 0;
}

void show(int a) {
  std::cout << "십진수: " << a << std::endl;
  std::cout << "십육진수: " << std::hex << a << std::endl;
  std::cout << "팔진수: " << std::oct << a << std::endl;
}