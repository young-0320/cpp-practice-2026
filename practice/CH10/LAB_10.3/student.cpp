// student.cpp
// Student class implementation for LAB 10.3

#include "student.h"

#include <iomanip>
#include <iostream>

Student::Student(const std::string& name, uint32_t id, float gpa, Status s)
    : name_(name), id_(id), gpa_(gpa), status_(s) {}

void Student::show() const {
  using std::cout;
  using std::endl;

  const char* status_str[] = {"Enrolled", "Leave of Absence", "Graduated"};

  cout << "---------------------------------------------" << endl;
  cout << "name   : " << name_ << endl;
  cout << "id     : " << std::setw(8) << std::setfill('0') << id_ << endl;
  cout << std::setfill(' ');
  cout << "GPA    : " << gpa_ << " / 4.3" << endl;
  cout << "status : " << status_str[static_cast<int>(status_)] << endl;
  cout << "---------------------------------------------" << endl;

  // 학기별 정렬 출력 로직 
  std::map<std::string, std::vector<lecture>> grouped_lectures;
  for (uint32_t i = 0; i < count_; ++i) {
    grouped_lectures[lect[i].semester_offered].push_back(lect[i]);
  }

  for (const auto& [semester, lectures] : grouped_lectures) {
    std::cout << "\n[" << semester << "]" << std::endl;
    for (const auto& l : lectures) {
      std::cout << " - " << l.name << " : " << l.grade << std::endl;
    }
  }
  cout << "---------------------------------------------" << endl;
}

void Student::update_status(Status s) { status_ = s; }

void Student::update_gpa(const std::string& in_name,
                         const std::string& in_semester,
                         const std::string& in_grade) {
  if (count_ >= 30) return;  // 배열 초과 방지

  lect[count_].name = in_name;
  lect[count_].semester_offered = in_semester;
  lect[count_].grade = in_grade;

  total_gpa += grade_to_gpa(in_grade);
  gpa_ = total_gpa / static_cast<double>(count_ + 1);
  count_++;
}

float Student::grade_to_gpa(const std::string& grade) {
  int index = 0;
  for (const auto& arr : Student::grade_map) {
    if (grade == arr) break;
    ++index;
  }
  return Student::gpa_map[index];
}

double Student::get_gpa() const { return this->gpa_; }