// string_test.cpp

#include <iostream>

#include "string2.h"
int main() {
  String::String s1(" and I am c++ student");
  String::String tring s2 = "Please enter your name";
  std::string s3;
  std::cout << s2;
  std::cin >> s3;
  s2 = "My name is " + s3;
  std::cout << s2 << ".\n";
  s2 = s2 + s1;
  s2.stringup();
  std::cout << s2;
  s3.stringlow();
  std::cout << s3;
  return 0;
}