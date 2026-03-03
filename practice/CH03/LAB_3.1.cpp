#include <iostream>
void display_data_size();
int main() {
  display_data_size();
  return 0;
}

void display_data_size() {
  std::cout << "short size: " << sizeof(short) << std::endl;
  std::cout << "int size : " << sizeof(int) << std::endl;
  std::cout << "long size: " << sizeof(long) << std::endl;
  std::cout << "long long size: " << sizeof(long long) << std::endl;
}