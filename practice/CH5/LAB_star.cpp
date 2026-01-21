#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
  int row = 0;

  cout << "출력할 행 수를 입력하세요: ";
  cin >> row;

  for (int count = 1; count <= row; ++count) {
    for (int i = 0; i < row - count; ++i) {
      cout << ".";
    }

    for (int j = 0; j < count; ++j) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
