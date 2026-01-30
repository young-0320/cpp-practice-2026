#include <iostream>

using std::cout, std::endl, std::cin;
char* buildstr(char a, char b, int n);
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

  cout << "distance = " << rect_to_polar(r).distance << ", "
       << rect_to_polar(r).angle << endl
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

rect polar_to_rect(polar* p) { return }
