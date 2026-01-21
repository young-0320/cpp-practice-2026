#include <iostream>
using namespace std;
int main() {
  int x[5] = {1, 2, 3, 4, 5};
  int* p = x;
  for (int i = 0; i < 2; i++) {
    int temp = *(p + i);
    *(p + i) = *(p + 4 - i);
    *(p + 4 - i) = temp;
  }
  for (int i = 0; i < 5; i++) {
    cout << *(p + i) << " ";
  }
  return 0;
}