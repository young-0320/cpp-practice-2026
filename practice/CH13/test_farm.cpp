#include "farm.h"
const int NUM_ANI = 3;

int main() {
  Animal* farm[NUM_ANI];
  Animal* ptr_0 = new Cat();
  Animal* ptr_1 = new Dog();
  Animal* ptr_2 = new Cow();
  farm[0] = ptr_0;
  farm[1] = ptr_1;
  farm[2] = ptr_2;

  std::cout << "=== farm animals speak ===" << std::endl;

  for (int i = 0; i < NUM_ANI; ++i) {
    farm[i]->speak();
    std::cout << std::endl;
    delete farm[i];
  }

  std::cout << "Done." << std::endl;
  return 0;
}