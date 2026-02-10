// main

#include "student.h"

#include <iostream>
int main() {
  std::cout << "프로그램 시작" << std::endl;
  Student one;
  one.show();
  Student two("홍길동", 20231234, 3.75f);
  two.show();
  std::cout << "[평점 수정]" << std::endl;
  two.update_gpa(4.12f);
  two.show();
  std::cout << "[상태 변경]" << std::endl;
  two.update_status(Student::Status::kGraduated);
  two.show();
  return 0;
}
