// studnet.cpp
// Student class implementation
// LAB_10.2

#include "student.h"

#include <iomanip>
#include <iostream>

Student::Student(const std::string& name, uint32_t id, float gpa, Status s)
    : name_(name), id_(id), gpa_(gpa), status_(s) {}

void Student::show() const {
  const char* status_str[] = {"재학", "휴학", "졸업"};

  using std::cout, std::endl, std::cin;
  cout << "---------------------------------------------" << endl;
  cout << "name : " << name_ << endl;
  cout << "id : " << std::setw(8) << std::setfill('0') << id_ << endl;
  cout << std::setfill(' ');
  cout << "GPA : " << gpa_ << endl;
  cout << "status : " << status_str[static_cast<int>(this->status_)] << endl;
  cout << "---------------------------------------------" << endl;
}

void Student::update_gpa(float gpa) { gpa_ = gpa; }

void Student::update_status(Status s) { status_ = s; }
