// student_test.cpp
// LAB 10.2

#include "student.h"

#include <iostream>

int main() {
  std::cout << "TEST START" << std::endl;

  // 1. 인자가 있는 생성자 테스트 (변경된 열거체 명칭 적용)
  Student student1("Alice", 20251234, 3.88f, Student::Status::Enrolled);
  student1.show();

  // 2. 평점 및 상태 업데이트 테스트
  std::cout << "\n[ Update Information ]" << std::endl;
  student1.update_gpa(4.1f);
  student1.update_status(Student::Status::LeaveOfAbsence);
  student1.show();

  // 3. 디폴트 생성자 테스트 (Enrolled가 기본값으로 들어가야 함)
  std::cout << "\n[ Default Constructor Test ]" << std::endl;
  Student student2;
  student2.show();

  return 0;
}