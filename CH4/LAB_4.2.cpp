#include <cstring>
#include <iostream>

int main() {
  char str[] = "m;lk;qweproj()U234jlkjwe";
  char str2[30] = {};

  unsigned int index = 0;
  for (int i = 0; str[i] != '\0'; i++) {
      index = i;
      break;
    }
  }
  if (index > 0 && index < 30) {
    strncpy(str2, str, index - 1);
  }

  str2[index] = '\0';

  std::cout << "Original string: " << str << std::endl;
  std::cout << "Extracted string: " << str2;
  return 0;
}