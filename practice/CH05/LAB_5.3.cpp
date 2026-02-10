#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
  char lower[] = "qqwe;)**kljklasd123@#ASDdoew";
  char upper[29] = {};

  char* p_lower = lower;
  char* p_upper = upper;
  while (*p_lower != '\0') {
    *p_upper = toupper(*p_lower);
    ++p_upper;
    ++p_lower;
  }

  cout << "Original string: " << lower << endl;
  cout << "Uppercase string: " << upper;

  return 0;
}