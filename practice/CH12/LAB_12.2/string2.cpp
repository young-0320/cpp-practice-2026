// string2.cpp
#include "string2.h"

#include <cstring>

String::String(const char* s) {
  len = std::strlen(s);
  str = new char[len + 1];
  std::strncpy(str, s, len);
  str[len] = '\0';
}

String::~String() { delete[] str; }

String::String() : len(0) {
  str = new char[1];
  str[0] = '\0';
}

String::String(const String& S) {
  len = S.length();
  str = new char[len + 1];
  std::strncpy(str, S.str, len);
  str[len] = '\0';
}

String& String::operator=(const String& S) {
  if (this == &S) return *this;
  delete[] str;
  len = S.length();
  str = new char[S.length() + 1];
  std::strncpy(str, S.str, S.length());
  str[len] = '\0';
  return *this;
}
String& String::operator=(const char* s) {
  if (str == s) return *this;
  delete[] str;
  len = std::strlen(s);
  str = new char[len + 1];

  std::strncpy(str, s, len);
  str[len] = '\0';
  return *this;
}
// String + String
String String::operator+(const String& S) const {
  int new_len = len + S.length();
  char* str_ptr = new char[new_len + 1];

  std::strncpy(str_ptr, str, len);

  std::strncpy(str_ptr + len, S.str, S.length());
  str_ptr[new_len] = '\0';
  String result(str_ptr);
  delete[] str_ptr;
  return result;
}

String& String::stringlow() {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = tolower((unsigned char)str[i]);
  }
  return *this;
}
String& String::stringup() {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = toupper((unsigned char)str[i]);
  }
  return *this;
}
// char* + String
String operator+(const char* s, String& S) { return String(s) + S; }

std::ostream& operator<<(std::ostream& os, const String& st) {
  std::cout << st.str;
  return os;
}

std::istream& operator>>(std::istream& is, String& st) {
  char buffer[100];
  is.getline(buffer, 100);

  delete[] st.str;

  st.len = std::strlen(buffer);
  st.str = new char[st.len + 1];
  std::strncpy(st.str, buffer, st.len + 1);
  st.str[st.len] = '\0';

  return is;
}