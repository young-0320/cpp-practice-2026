// sum/cpp - sum two integers
#include <iostream>
void mysum(int a, int b);
int main() {
  using namespace std;
  int a, b;
  cout << "두 정수를 입력하세요: ";
  cin >> a >> b;
  mysum(a, b);
  return 0;
}

void mysum(int a, int b) { std::cout << "정수 a + b = " << a + b << std::endl; }