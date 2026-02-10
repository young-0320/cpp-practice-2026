#include <iostream>
#include <string>
using std::cout, std::endl, std::cin;
using std::string;

int sum(int n = 100);
int main() {
  cout << "n입력(입력이 없을 시 100):";

  string input;
  getline(cin, input);
  if (input.empty()) {
    int result = sum();
    cout << "1 to 100:" << result << endl;

  } else {
    int n = (std::stoi)(input);
    int result = sum(n);
    cout << "1 to " << n << " = " << result << endl;
  }

  return 0;
}
int sum(int n) {
  int result = 0;
  result = (n * (n + 1)) / 2;
  return result;
}