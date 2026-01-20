#include <cctype>
#include <iostream>
#include <string>
using std::cout, std::endl, std::cin;
using std::string;
int main() {
  string input_str;
  cout << "Enter a string of text:" << endl;

  std::getline(cin, input_str);
  input_str[0] = std::toupper(input_str[0]);

  for (int i = 1; i < input_str.size(); ++i) {
    if (std::isalpha(input_str[i])) {  // 알파벳이면
      input_str[i] = std::tolower(input_str.at(i));
    } else
      input_str[i] = ' ';
  }
  cout << input_str;
  return 0;
}