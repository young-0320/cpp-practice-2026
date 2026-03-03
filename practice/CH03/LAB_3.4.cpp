#include <iostream>
void show(int a);
int main() {
  int a;
  std::cout << " 알파벳의 ASCII 코드값을 입력하시오(65~90, 97~122): ";
  std::cin >> a;
  show(a);
  return 0;
}

void show(int a) {
  if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
    std::cout << a;
    std::cout << ",   " << static_cast<char>(a);
    std::cout << ",   " << static_cast<char>(toupper(a));
  } else {
    std::cout << "입력한 ASCII 코드값은 알파벳이 아닙니다." << std::endl;
    return;
  }
}