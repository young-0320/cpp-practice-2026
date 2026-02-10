#include <cmath>
#include <iostream>
using std::cout, std::endl, std::cin;

struct mycomplex {
  double x;
  double y;
};

template <typename T>
T mysum(T a, T b) {
  return a + b;
}
template <>
mycomplex mysum(mycomplex a, mycomplex b) {
  mycomplex temp;
  temp.x = a.x + b.x;
  temp.y = a.y + b.y;
  return temp;
}
int main() {
  cout << "===Integer Sum===" << endl;
  int a, b;
  cout << "두 정수를 입력하세요: ";
  cin >> a >> b;

  cout << a << " + " << b << " = " << mysum(a, b) << endl;

  cout << "===Double Sum===" << endl;
  double da, db;
  cout << "두 double를 입력하세요: ";
  cin >> da >> db;
  cout << da << " + " << db << " = " << mysum(da, db) << endl;

  cout << "===Complex Sum===" << endl;
  mycomplex ca, cb;
  cout << "두 complex를 입력하세요 a b c d -> a+bj, c+dj: ";

  cin >> ca.x >> ca.y >> cb.x >> cb.y;

  // if문 난사를 연산자 오버로딩으로 해결하는게 제일 나이스->11장에서 배움.
  mycomplex result = mysum(ca, cb);
  if (result.y > 0) {
    cout << "(" << result.x << " + " << result.y << "j)" << endl;
  } else if (result.y == 0.0) {
    cout << "(" << result.x << ")" << endl;
  } else {
    cout << "(" << result.x << " - " << std::abs(result.y) << "j)" << endl;
  }

  return 0;
}