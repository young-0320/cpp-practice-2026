// string2.h
#pragma once
#include <iostream>
class String {
 public:
  String(const char* s);
  String();
  String(const String&);
  ~String();
  int length() const { return len; }

  String& operator=(const String&);
  String& operator=(const char*);
  String operator+(const String& a) const;

  String& stringlow();
  String& stringup();

  friend std::ostream& operator<<(std::ostream& os, const String& st);
  friend std::istream& operator>>(std::istream& is, String& st);
  friend String operator+(const char* s, String& S);

 private:
  char* str;
  int len;
  static const int CINLIM = 80;
};
