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
rect polar_to_rect(polar& p);
polar rect_to_polar(rect& r);
int main() {
  rect rect_input;
  cout << "rect input: ";
  cin >> rect_input.x >> rect_input.y;
  cout << "rect{x=" << rect_input.x << ", y=" << rect_input.y << "}" << endl;

  polar pol_input;
  cout << "pol input: ";
  cin >> pol_input.distance >> pol_input.angle;
  cout << "polar{x=" << pol_input.distance << ", y=" << pol_input.angle << "}"
       << endl;
  polar povalue = rect_to_polar(rect_input);
  rect recvalue = polar_to_rect(pol_input);

  cout << "rect to polar result{r=" << povalue.distance
       << ", theta(rad)=" << povalue.angle << "}" << endl;

  cout << "polar to rect result{x=" << recvalue.x << ", y=" << recvalue.y << "}"
       << endl;

  return 0;
}

polar rect_to_polar(rect& r) {
  polar result;

  result.distance = sqrt(r.x * r.x + r.y * r.y);
  result.angle = atan2(r.y, r.x);
  return result;
}

rect polar_to_rect(polar& p) {
  rect result;
  result.x = p.distance * std::cos((p.angle));
  result.y = p.distance * std::sin((p.angle));
  return result;
}
