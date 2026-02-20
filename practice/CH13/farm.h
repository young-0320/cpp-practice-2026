#pragma once
#include <iostream>
class Animal {
 public:
  Animal() : age(1) {}
  virtual ~Animal() = default;
  virtual void speak() const { std::cout << "Animal speak!\n"; }

 private:
  int age;
};

class Cat : public Animal {
 public:
  Cat() : Animal() {}
  virtual ~Cat() = default;
  void speak() const override { std::cout << "Cat speak: Yaong!\n"; }
};

class Dog : public Animal {
 public:
  Dog() : Animal() {}
  virtual ~Dog() = default;
  void speak() const override { std::cout << "Dog speak: Bow-wow!\n"; }
};