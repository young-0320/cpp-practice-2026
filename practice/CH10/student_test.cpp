// main

#include "student.h"

#include <iostream>
int main() {
  std::cout << "프로그램 시작" << std::endl;
  Student one("Alice", 20251234);
  one.update_gpa("Economics", "2024-2", "A+");
  one.update_gpa("Discrete", "2024-1", "A0");
  one.update_gpa("English", "2024-1", "B+");
  one.update_gpa("LA", "2024-2", "B0");
  one.update_gpa("Programming 1", "2024-1", "A+");
  one.update_gpa("Programming 2", "2024-2", "A0");

  one.update_gpa("Algorithms", "2025-1", "A0");

  one.show();

  return 0;
}
