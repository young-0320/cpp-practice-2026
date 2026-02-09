// file2.cpp
#include <iostream>

#include "coordin.h"

void display(const free_throws& ft) {
  std::cout << "Name: " << ft.name << std::endl;
  std::cout << "Made: " << ft.made << '\t';
  std::cout << "Attempts: " << ft.attempts << '\t';
  std::cout << "Percent " << ft.percent << std::endl;
}

void set_pc(free_throws& ft) {
  if (ft.attempts != 0)
    ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
  else
    ft.percent = 0;
}

free_throws& accumulate(free_throws& target, const free_throws& source) {
  target.attempts += source.attempts;
  target.made += source.made;
  set_pc(target);
  return target;
}
