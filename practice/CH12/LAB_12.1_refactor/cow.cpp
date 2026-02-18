// cow.cpp -refactor
#include "cow.h"

#include <iostream>
Cow::Cow(const std::string& nm, const std::string& ho, double wt)
    : name_(nm), hobby_(ho), weight_(wt) {}

Cow::Cow(const Cow& c) : name_(c.name_), hobby_(c.hobby_), weight_(c.weight_) {}

void Cow::ShowCow() const {
  std::cout << "Name   : " << name_ << std::endl;
  std::cout << "Hobby  : " << hobby_ << std::endl;
  std::cout << "Weight : " << weight_ << std::endl;
}