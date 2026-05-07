// student.cpp
// LAB 10.2

#include "student.h"

#include <iomanip>
#include <iostream>

Student::Student(const std::string& name, uint32_t id, float gpa, Status s)
    : name_(name), id_(id), gpa_(gpa), status_(s) {}

void Student::show() const {
  using std::cout;
  using std::endl;

  // enum 선언 순서(Enrolled=0, LeaveOfAbsence=1, Graduated=2)
  const char* status_str[] = {"Enrolled", "Leave of Absence", "Graduated"};

  cout << "---------------------------------------------" << endl;
  cout << "name   : " << name_ << endl;
  cout << "id     : " << std::setw(8) << std::setfill('0') << id_ << endl;
  cout << std::setfill(' ');
  cout << "GPA    : " << gpa_ << " / 4.3" << endl;
  cout << "status : " << status_str[static_cast<int>(status_)] << endl;
  cout << "---------------------------------------------" << endl;
}

void Student::update_gpa(float new_gpa) { gpa_ = new_gpa; }

void Student::update_status(Status s) { status_ = s; }