#include <iostream>

using std::cout, std::endl, std::cin;
char* buildstr(char a, char b, int n);

int main() {
  char ch_a = '\0';
  char ch_b = '\0';
  int n = 0;
  cout << "Enter a: ";
  cin >> ch_a;

  cout << "Enter b: ";
  cin >> ch_b;
  cout << "Enter n: ";
  cin >> n;
  char* result = buildstr(ch_a, ch_b, n);
  cout << "Result string: " << buildstr(ch_a, ch_b, n);
  delete[] result;
  return 0;
}
char* buildstr(char a, char b, int n) {
  const int size = (2 * n) + 1;
  char* p_str_ary = new char[size];

  for (int i = 0; i < size - 1; i += 2) {
    p_str_ary[i] = a;
    p_str_ary[i + 1] = b;
  }

  return p_str_ary;
}