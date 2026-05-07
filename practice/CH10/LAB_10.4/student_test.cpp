// student_test.cpp
// LAB 10.4

#include "student.h"

#include <iostream>

const int NUM_STUDENTS = 4;

int main() {
  std::cout << "--- LAB 10.4 TEST START ---" << std::endl;

  // Student 클래스 배열 초기화
  Student students[NUM_STUDENTS] = {
      Student("Alice", 20251234, 0.0f, Student::Status::Enrolled),
      Student("Bob", 20194567, 0.0f, Student::Status::Enrolled),
      Student("Cara", 20183456, 0.0f, Student::Status::Enrolled),
      Student("Dave", 20215555, 0.0f, Student::Status::Enrolled)};

  // Alice
  students[0].update_gpa("Programming 1", "2020-1", "A+");
  students[0].update_gpa("Discrete", "2021-1", "A0");
  students[0].update_gpa("Programming 2", "2021-2", "A0");

  // Bob
  students[1].update_gpa("Programming 1", "2020-1", "B+");
  students[1].update_gpa("Discrete", "2021-1", "B0");
  students[1].update_gpa("Programming 2", "2021-2", "A0");

  // Cara
  students[2].update_gpa("Programming 1", "2020-1", "A0");
  students[2].update_gpa("Discrete", "2021-1", "A+");
  students[2].update_gpa("Programming 2", "2021-2", "A+");

  // Dave
  students[3].update_gpa("Programming 1", "2020-1", "B0");
  students[3].update_gpa("Discrete", "2021-1", "B+");
  students[3].update_gpa("Programming 2", "2021-2", "B+");

  // 배열 순회하며 전체 학생 정보 출력
  for (int i = 0; i < NUM_STUDENTS; ++i) {
    students[i].show();
  }

  // topGPA 판별 로직
  std::cout << "\n[ TOP GPA Student ]" << std::endl;
  const Student* top = &students[0];
  for (int i = 1; i < NUM_STUDENTS; ++i) {
    top = &top->topGPA(students[i]);
  }

  top->show();

  return 0;
}