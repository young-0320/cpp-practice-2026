// cow.cpp

#include "cow.h"

#include <cstring>
#include <iostream>

Cow::Cow(const char* nm, const char* ho, double wt) : weight(wt) {
  std::strncpy(name, nm, 19);
  name[19] = '\0';

  int len = std::strlen(ho);
  hobby = new char[len + 1];
  std::strcpy(hobby, ho);
}

Cow::~Cow() { delete[] hobby; }

Cow::Cow() : weight(0) {
  std::strcpy(name, "noname");
  hobby = nullptr;
}

Cow::Cow(const Cow& c) : Cow::Cow(c.name, c.hobby, c.weight) {}

Cow& Cow::operator=(const Cow& c) {
  if (this == &c) return *this;

  delete[] hobby;
  std::strncpy(this->name, c.name, 19);
  name[19] = '\0';
  weight = c.weight;

  if (c.hobby) {
    int len = std::strlen(c.hobby);
    this->hobby = new char[len + 1];
    std::strcpy(this->hobby, c.hobby);
  } else {
    this->hobby = nullptr;
  }
  return *this;
}
void Cow::ShowCow() const {
  using std::cout, std::endl;
  cout << "Name    : " << name << endl;

  cout << "Hobby   : " << (hobby ? hobby : "(none)") << endl;
  cout << "Weight  : " << weight << endl;
}