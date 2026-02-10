#include <iostream>

using std::cout, std::endl, std::cin;

int* sum_arr(const int arr[][4]);

int main() {
  int data[3][4] = {{1, 2, 3, 4}, {9, 2, 4, 6}, {4, 2, 6, 8}};

  int* pa = sum_arr(data);
  cout << "input 2D Array:" << endl;

  for (int i = 0; i < 3; ++i) {
    cout << "Row " << i + 1 << ": ";

    for (int j = 0; j < 4; ++j) {
      cout << data[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl << "Row sums:" << endl;

  for (int i = 0; i < 3; ++i) {
    cout << "Row " << i + 1 << ": ";
    cout << *(pa + i) << endl;
  }
  delete[] pa;
  return 0;
}

int* sum_arr(const int arr[3][4]) {
  int* parr = new int[3];
  int sum = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      sum += arr[i][j];
    }
    *(parr + i) = sum;
    sum = 0;
  }
  return &parr[0];
}