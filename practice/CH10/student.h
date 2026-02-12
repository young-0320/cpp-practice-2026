// student.h
// Student class
// LAB_10.1
#pragma once

#include <cstdint> //uint32_t type 사용
#include <map>
#include <string>
#include <string_view>
#include <vector>

struct lecture {
  std::string name;
  std::string semester_offered;
  std::string grade;
};

class Student {
 public:
  enum class Status : char {
    kAttending,       // 재학
    kLeaveOfAbsence,  // 휴학
    kGraduated        // 졸업
  };
  // 재학/휴학/졸업 3가지 상태
  // 상태 정의는 범위 지정 열거체를 사용하고, 위치는 public

  void show() const;

  const Student& topGPA(const Student& st) const;

  void update_gpa(const std::string& in_name, const std::string& in_semester,
                  const std::string& in_grade);

  void update_status(Status s);

  Student(const std::string& name = "Noname", uint32_t id = 0, float gpa = 0,
          Status s = Status::kAttending);
  // 생성자는 까먹지 말고 만들기
  double get_gpa() const;

 private:
  std::string name_;
  uint32_t id_;
  float gpa_;
  Status status_;
  lecture lect[30];
  uint32_t count_ = 0;
  double total_gpa = 0.0;
  static constexpr float gpa_map[] = {4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3,
                                      2.0, 1.7, 1.3, 1.0, 0.7, 0.0};
  static constexpr std::string_view grade_map[] = {"A+", "A0", "A-", "B+", "B0",
                                                   "B-", "C+", "C0", "C-", "D+",
                                                   "D0", "D-", "F"};
  float grade_to_gpa(const std::string& grade);
};
