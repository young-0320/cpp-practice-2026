// student.h
// LAB 10.2
#pragma once

#include <cstdint>
#include <string>

class Student {
 public:
  enum class Status : char {
    Enrolled,       // 재학
    LeaveOfAbsence,  // 휴학
    Graduated        // 졸업
  };

  // 생성자 (Default parameter 적용)
  Student(const std::string& name = "Noname", uint32_t id = 0, float gpa = 0.0f,
          Status s = Status::Enrolled);

  void show() const;
  void update_gpa(float new_gpa);
  void update_status(Status s);

 private:
  std::string name_;
  uint32_t id_;
  float gpa_;
  Status status_;
};