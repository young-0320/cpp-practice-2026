#include <cmath>
#include <iostream>
using std::cout, std::endl, std::cin;

int sum_recursive(int);
int main() {
  int n = 0;
  cin >> n;
  int result = sum_recursive(n);
  cout << "1 to n sum = " << result;

  return 0;
}
int sum_recursive(int n) {
  if (n <= 1) return n;

  return n + sum_recursive(n - 1);
}