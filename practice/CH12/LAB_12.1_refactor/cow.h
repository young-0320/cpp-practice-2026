// cow.h -refactor
#pragma once

#include <string>

class Cow {
  std::string name_ = "noname";
  std::string hobby_ = "(none)";
  double weight_ = 0;

 public:
  Cow() = default;
  Cow(const std::string& nm, const std::string& ho, double wt);
  Cow(const Cow& c);
  void ShowCow() const;  // display all cow data
};