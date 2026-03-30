#include <climits>
#include <iostream>
// short와 int의 최대값을 출력하는 프로그램

int main() {
  std::cout << "short의 최대값: " << SHRT_MAX << std::endl;
  std::cout << "int의 최대값: " << INT_MAX << std::endl;
  int over_num = INT_MAX + 1;
  std::cout << "int 오버플로 값 : " << over_num << std::endl;
  return 0;
}