#include <iostream>

using namespace std;

class Diagram {
 private:
  double width;
  double height;

 public:
  Diagram(double x_, double y_) : width(x_), height(y_) {}
  virtual ~Diagram() {}

  virtual double area() const = 0;
  double getWidth() const { return width; };    // 너비를 읽음
  double getHeight() const { return height; };  // 높이를 읽음
};

class Rectangle : public Diagram {
 public:
  Rectangle(double width_, double height_) : Diagram(width_, height_) {}
  double area() const override { return getWidth() * getHeight(); }
};

// 정사각형은 하나의 변만 입력받음
class Square : public Diagram {
 public:
  Square(double side) : Diagram(side, side) {}
  double area() const override { return (getWidth() * getHeight()); }
};

// 마름모는 대각선을 입력받음
class Rhombus : public Diagram {
 public:
  Rhombus(double diagonal1, double diagonal2) : Diagram(diagonal1, diagonal2) {}
  double area() const override { return (getWidth() * getHeight()) / 2.0; }
};

int main() {
  Diagram* arr[3];

  arr[0] = new Rectangle(3, 4);
  // 한 변만 입력
  arr[1] = new Square(5);
  // 각 대각선 입력
  arr[2] = new Rhombus(6, 8);

  for (int i = 0; i < 3; i++) {
    cout << arr[i]->area() << endl;
  }

  for (int i = 0; i < 3; i++) {
    delete arr[i];
  }

  return 0;
}