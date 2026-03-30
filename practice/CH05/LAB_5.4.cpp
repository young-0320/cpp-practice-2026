#include <iostream>
#include <string>
using std::cout, std::endl, std::cin;
using std::string;
int main() {
  string word = "?ate";
  char ch = 'a';
  while (word != "mate") {
    cout << word << endl;
    word[0] = ch;
    ch++;
  }
  cout << "루프가 끝난 후에 단어는 " << word << "입니다.\n";
  return 0;
}
