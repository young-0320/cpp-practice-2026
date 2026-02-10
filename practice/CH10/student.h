// student.h
// Student class
// LAB_10.1
#pragma once

#include <cstdint>
#include <string>

class Student {
 public:
  enum class Status : char {
    kAttending,       // 재학
    kLeaveOfAbsence,  // 휴학
    kGraduated        // 졸업
  };  // 재학/휴학/졸업 3가지 상태
  // 상태 정의는 범위 지정 열거체를 사용하고, 위치는 public
  void show() const;

  void update_gpa(float gpa);

  void update_status(Status s);

  Student(const std::string& name = "Noname", uint32_t id = 0, float gpa = 0,
          Status s = Status::kAttending);
  // 생성자는 까먹지 말고 만들기

 private:
  std::string name_;
  uint32_t id_;
  float gpa_;
  Status status_;
};
