#include <cmath>
#include <iomanip>
#include <iostream>
using std::cout, std::endl, std::cin;

double exp_approx(double x, int n);

int main() {
  cout << std::fixed << std::setprecision(12);
  double x = 0.0;
  int n = 0;
  cout << "x n 입력 : ";
  cin >> x >> n;

  double true_value = std::exp(-1.0);
  std::cout.precision(12);
  cout << "n" << "          " << "approximation" << "        " << "true value"
       << "  " << "abs error" << endl;
  for (int i = 1; i <= n; ++i) {
    double temp = exp_approx(x, i);
    cout << i << "          " << temp << "  " << true_value << " "
         << std::abs(true_value - temp) << endl;
  }
  return 0;
}

double exp_approx(double x, int n) {
  // n이 상한선, 변수가 k
  double sum = 1.0;
  double term = 1.0;
  for (int k = 1; k <= n; ++k) {
    term *= (x / k);
    sum += term;
  }
  return (double)sum;
}