// student.h
// LAB 10.4
#pragma once

#include <cstdint>
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
    Enrolled,        // 재학
    LeaveOfAbsence,  // 휴학
    Graduated        // 졸업
  };

  static const int MAX_LECTURES = 30;

  Student(const std::string& name = "Noname", uint32_t id = 0, float gpa = 0.0f,
          Status s = Status::Enrolled);

  void show() const;
  const Student& topGPA(const Student& st) const;
  void update_gpa(const std::string& in_name, const std::string& in_semester,
                  const std::string& in_grade);
  void update_status(Status s);
  double get_gpa() const;

 private:
  std::string name_;
  uint32_t id_;
  float gpa_;
  Status status_;

  lecture lect[MAX_LECTURES];  // 클래스 스코프 상수 사용
  uint32_t count_ = 0;
  double total_gpa = 0.0;

  static constexpr float gpa_map[] = {4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3,
                                      2.0, 1.7, 1.3, 1.0, 0.7, 0.0};
  static constexpr std::string_view grade_map[] = {"A+", "A0", "A-", "B+", "B0",
                                                   "B-", "C+", "C0", "C-", "D+",
                                                   "D0", "D-", "F"};
  float grade_to_gpa(const std::string& grade);
};