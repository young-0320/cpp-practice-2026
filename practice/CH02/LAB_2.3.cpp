// celcius.cpp --화씨를 섭씨로
#include <iostream>
int main() {
  using namespace std;
  cout << "화씨 입력: ";
  double F;
  cin >> F;
  double C = (F - 32.0) / 1.8;
  cout << F << " degrees 화씨는 " << C << " degrees 섭씨." << endl;
  return 0;
}