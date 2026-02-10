// studnet.cpp
// Student class implementation
// LAB_10.2

#include "student.h"

#include <algorithm>  // std::sort
#include <iomanip>
#include <iostream>
#include <unordered_map>

double get_gpa(const std::string& grade);
Student::Student(const std::string& name, uint32_t id, float gpa, Status s)
    : name_(name), id_(id), gpa_(gpa), status_(s) {}

void Student::show() const {
  // const char* status_str[] = {"재학", "휴학", "졸업"};

  using std::cout, std::endl, std::cin;
  cout << "---------------------------------------------" << endl;
  cout << "name : " << name_ << endl;
  cout << "id : " << std::setw(8) << std::setfill('0') << id_ << endl;
  cout << std::setfill(' ');
  cout << "GPA : " << gpa_ << endl;
  // cout << "status : " << status_str[static_cast<int>(this->status_)] << endl;

  cout << "---------------------------------------------" << endl;
}

void Student::update_status(Status s) { status_ = s; }

void Student::update_gpa(std::string in_name, std::string in_semester,
                         std::string in_grade) {
  lect[count].name = in_name;
  lect[count].semester_offered = in_semester;
  lect[count].grade = in_grade;
  double total = 0.0;
  for (int i = 0; i <= count; ++i) {
    total += get_gpa(lect[i].grade);
  }
  gpa_ = total / ((double)(count + 1));

  sort_lect(lect, (count + 1));
  count++;
}

double get_gpa(const std::string& grade) {
  static const std::unordered_map<std::string, double> gpa_table = {
      {"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7}, {"B+", 3.3}, {"B0", 3.0},
      {"B-", 2.7}, {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7}, {"D+", 1.3},
      {"D0", 1.0}, {"D-", 0.7}, {"F", 0.0}};

  auto it = gpa_table.find(grade);
  if (it != gpa_table.end()) {
    return it->second;
  }
  return 0.0;  // 성적을 찾지 못했을 때의 기본 반환값 추가
}
void sort_lect(lecture* lect, size_t size) {
  std::sort(lect, lect + size, [](const lecture& a, const lecture& b) {
    return a.semester_offered < b.semester_offered;
  });
  // 범위 지정, 람다 함수 사용
}