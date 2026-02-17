// cow_test.cpp

#include "cow.h"

#include <iostream>

int main() {
  Cow c1;
  Cow c2("Bessie", "Eating grass", 350.5);
  std::cout << "[c1]\n";
  c1.ShowCow();
  std::cout << "\n[c2]\n";
  c2.ShowCow();
  // 복사 생성자 테스트
  Cow c3 = c2;
  std::cout << "\n[c3 = c2 (copy ctor)]\n";
  c3.ShowCow();
  // 대입 연산자 테스트
  c1 = c2;
  std::cout << "\n[c1 = c2 (operator=)]\n";
  c1.ShowCow();
  // 자기 대입 테스트 (크래시/메모리 누수 없어야 함)
  c2 = c2;
  std::cout << "\n[c2 = c2 (self assignment)]\n";
  c2.ShowCow();
  return 0;
}