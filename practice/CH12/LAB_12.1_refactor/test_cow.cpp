// cow_test.cpp - refactor

#include <iostream>

#include "cow.h"

int main() {
  // 1. 기본 생성자 테스트
  // name_="noname", hobby_="(none)", weight_=0 으로 초기화됨
  Cow c1;
  std::cout << "[c1] Default Constructor\n";
  c1.ShowCow();

  // 2. 매개변수 생성자 테스트
  // const char* 리터럴이 자동으로 std::string으로 변환되어 전달됨
  Cow c2("Bessie", "Eating grass", 350.5);
  std::cout << "\n[c2] Parameterized Constructor\n";
  c2.ShowCow();

  // 3. 복사 생성자 테스트
  // cow.h에 선언된 Cow(const Cow& c)가 호출됨
  Cow c3 = c2;
  std::cout << "\n[c3] Copy Constructor (c3 = c2)\n";
  c3.ShowCow();

  // 4. 대입 연산자 테스트
  // 주의: 헤더에 operator=가 없지만, 멤버들이 모두 복사 가능하므로
  c1 = c2;
  std::cout << "\n[c1] Assignment Operator (c1 = c2)\n";
  c1.ShowCow();

  // 5. 자기 대입 테스트
  c2 = c2;
  std::cout << "\n[c2] Self Assignment (c2 = c2)\n";
  c2.ShowCow();

  return 0;
}