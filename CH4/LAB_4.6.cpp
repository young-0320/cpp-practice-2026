#include <array>
#include <iostream>
#include <string>

using std::array;
using std::cin, std::cout, std::endl;
using std::string;

struct student {
  string name = "NULL";
  unsigned int student_id = 0;
  float GPA = 0.00f;
};
void printStudent(const student& s,
                  int index) {  // 파라미터: 학생 정보의 메모리 주소, 학생 번째
  cout << "Student " << index << " Information:" << endl;
  cout << "Name: " << s.name << endl;
  cout << "Student_ID: " << s.student_id << endl;
  cout << "GPA: " << s.GPA << endl;
  cout << "-----------------------------" << endl;
}
int main() {
  student* ptr = new student[3];
  ptr[0] = {.name = "Alice", .student_id = 2023001, .GPA = 3.75};
  ptr[1] = {.name = "Bob", .student_id = 2023002, .GPA = 3.42};
  ptr[2] = {.name = "Charlie", .student_id = 2023003, .GPA = 3.89};

  int count = 1;
  for (int i = 0; i < 3; ++i) {
    printStudent(ptr[i], count++);
  }
  delete[] ptr;
  return 0;
}