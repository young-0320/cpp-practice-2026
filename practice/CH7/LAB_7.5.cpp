#include <cmath>
#include <iostream>
using std::cout, std::endl, std::cin;

struct rect {
  double x;
  double y;
};
struct polar {
  double distance;
  double angle;
};
rect polar_to_rect(polar* p);
polar rect_to_polar(rect* r);

// 동일 로직의 함수는 한번만 호출하고 스택 변수에 담아서 cout하자.
int main() {
  rect rect_input;
  polar polar_input;

  polar* p = &polar_input;
  rect* r = &rect_input;

  cout << "[rect -> polar]" << endl << "Enter x y; ";
  double x, y;
  if (cin >> x >> y) {
    rect_input.x = x;
    rect_input.y = y;
  }
  double deg = 0.0;
  deg = (rect_to_polar(r).angle) * (57.29577951);
  cout << "distance = " << rect_to_polar(r).distance
       << ", angle = " << rect_to_polar(r).angle << " rad " << "(" << deg
       << " deg)" << endl
       << "[polar -> rect]" << endl;

  cout << "Enter distance and angle(deg): ";
  double distance, angle;
  if (cin >> distance >> angle) {
    polar_input.distance = distance;
    polar_input.angle = angle;
  }
  cout << "x = " << polar_to_rect(p).x << ", y = " << polar_to_rect(p).y;

  return 0;
}

polar rect_to_polar(rect* r) {
  polar result;
  result.distance = sqrt(r->x * r->x + r->y * r->y);
  result.angle = atan2(r->y, r->x);
  return result;
}

rect polar_to_rect(polar* p) {
  rect result;
  result.x = p->distance * std::cos((p->angle) * (3.14159 / 180.0));
  result.y = p->distance * std::sin((p->angle) * (3.14159 / 180.0));
  return result;
}