#include <iostream>
#include <string>
using std::cout, std::endl, std::cin;
using std::string;
int main() {
  cout << "Your first name, please: ";
  string name;
  cin >> name;
  cout << "Here is your name, verticalized and ASCIIized:\n";
  for (int i = 0; name[i] != '\0'; ++i) {
    cout << name[i] << ": " << int(name[i]) << endl;
  }

  return 0;
}