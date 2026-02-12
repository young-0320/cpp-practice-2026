// main

#include "student.h"

#include <iostream>
int main() {
  std::cout << "PROGRAM START" << std::endl;
  Student one("Alice", 20251234);
  one.update_gpa("Economics", "2024-2", "A+");
  one.update_gpa("Discrete", "2024-1", "A0");
  one.update_gpa("Algorithms", "2025-1", "A0");
  one.update_gpa("English", "2024-1", "B+");
  one.update_gpa("LA", "2024-2", "B0");
  one.update_gpa("Operating Systems", "2025-1", "A+");
  one.update_gpa("Programming 1", "2024-1", "A+");
  one.update_gpa("Programming 2", "2024-2", "A0");
  one.update_gpa("Psychology", "2025-1", "B+");

  one.show();
  std::cout << "topGPA TEST START" << std::endl;
  std::vector<Student> v_s;
  v_s.emplace_back("Alice", 20251234);
  v_s[0].update_gpa("Programming 1", "2020-1", "A+");
  v_s[0].update_gpa("Discrete", "2021-1", "A0");
  v_s[0].update_gpa("Programming 2", "2021-2", "A0");

  v_s.emplace_back("Bob", 20194567);
  v_s[1].update_gpa("Programming 1", "2020-1", "B+");
  v_s[1].update_gpa("Discrete", "2021-1", "B0");
  v_s[1].update_gpa("Programming 2", "2021-2", "A0");

  v_s.emplace_back("Cara", 20183456);
  v_s[2].update_gpa("Programming 1", "2020-1", "A0");
  v_s[2].update_gpa("Discrete", "2021-1", "A+");
  v_s[2].update_gpa("Programming 2", "2021-2", "A+");

  v_s.emplace_back("Dave", 20215555);
  v_s[3].update_gpa("Programming 1", "2020-1", "B0");
  v_s[3].update_gpa("Discrete", "2021-1", "B+");
  v_s[3].update_gpa("Programming 2", "2021-2", "B+");

  v_s[0].show();
  v_s[1].show();
  v_s[2].show();
  v_s[3].show();
  const Student* top = &v_s[0];
  for (int i = 1; i < size(v_s); ++i) {
    top = &top->topGPA(v_s[i]);
  }

  std::cout << "TOP GPA student" << std::endl;
  top->show();

  return 0;
}
