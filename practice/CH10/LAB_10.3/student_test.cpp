// student_test.cpp
// main function for LAB 10.3

#include "student.h"

#include <iostream>

int main() {
  std::cout << "LAB 10.3 TEST START" << std::endl;

  Student one("Alice", 20251234, 0.0f, Student::Status::Enrolled);

  // 3개 학기, 9개 과목 입력 테스트
  one.update_gpa("Discrete Mathematics", "2024-1", "A0");
  one.update_gpa("English", "2024-1", "B+");
  one.update_gpa("Programming 1", "2024-1", "A+");

  one.update_gpa("Economics", "2024-2", "A+");
  one.update_gpa("Linear Algebra", "2024-2", "B0");
  one.update_gpa("Programming 2", "2024-2", "A0");

  one.update_gpa("Algorithms", "2025-1", "A0");
  one.update_gpa("Operating Systems", "2025-1", "A+");
  one.update_gpa("Psychology", "2025-1", "B+");

  // 정보 및 학기별 수강 내역 출력 테스트
  one.show();

  return 0;
}