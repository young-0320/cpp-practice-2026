#include <cstring>
#include <iostream>

int main() {
  char str[] = "m;lk;qweproj()U234jlkjwe";
  char str2[30] = {};

  unsigned int index = 0; //index는 숫자의 위치
  for (int i = 0;str[i] != '\0'; i++){
    if ('0'<= str[i] && str[i] <= '9'){
      index = i;
      break;
    }
  }
  if (index <= 30) {
    strncpy(str2, str, index );
  }
  str2[index] = '\0';

  std::cout << "Original string: " << str << std::endl;
  std::cout << "Extracted string: " << str2;
  return 0;
}