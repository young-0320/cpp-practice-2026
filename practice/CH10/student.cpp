// studnet.cpp
// Student class implementation
// LAB_10.2

#include "student.h"

#include <algorithm>  // std::sort
#include <iomanip>
#include <iostream>

float grade_to_gpa(const std::string& grade);
Student::Student(const std::string& name, uint32_t id, float gpa, Status s)
    : name_(name), id_(id), gpa_(gpa), status_(s) {}

void Student::show() const {
  // const char* status_str[] = {"재학", "휴학", "졸업"};

  using std::cout, std::endl, std::cin;
  cout << "---------------------------------------------" << endl;
  cout << "name : " << name_ << endl;
  cout << "id : " << std::setw(8) << std::setfill('0') << id_ << endl;
  cout << std::setfill(' ');
  cout << "GPA : " << gpa_ << "/4.3" << endl;
  // cout << "status : " << status_str[static_cast<int>(this->status_)] << endl;
  std::map<std::string, std::vector<lecture>> grouped_lectures;
  // 학기별 정렬은, 새 학기가 입력될 때마다 동적 배열 vector를 생성
  // 파이썬의 딕셔너리 안의 리스트 느낌
  for (uint32_t i = 0; i < count_; ++i) {
    grouped_lectures[lect[i].semester_offered].push_back(lect[i]);
  }

  for (const auto& [semester, lectures] : grouped_lectures) {
    std::cout << "[" << semester << " 학기]" << std::endl;
    for (const auto& l : lectures) {
      std::cout << l.name << " : " << l.grade << std::endl;
    }
  }
  cout << "---------------------------------------------" << endl;
}

void Student::update_status(Status s) { status_ = s; }

void Student::update_gpa(const std::string& in_name,
                         const std::string& in_semester,
                         const std::string& in_grade) {
  lect[count_].name = in_name;
  lect[count_].semester_offered = in_semester;
  lect[count_].grade = in_grade;

  total_gpa += grade_to_gpa(in_grade);

  gpa_ = total_gpa / ((double)(count_ + 1));

  count_++;
}

float Student::grade_to_gpa(const std::string& grade) {
  int index = 0;
  for (const auto& arr : Student::grade_map) {
    if (grade == arr) {
      break;
    }
    ++index;
  }

  return Student::gpa_map[index];
}

const Student& Student::topGPA(const Student& st) const {
  if (st.get_gpa() > this->get_gpa())
    return st;
  else
    return *this;
}

double Student::get_gpa() const { return this->gpa_; }