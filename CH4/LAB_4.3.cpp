#include <iostream>
#include <string>

int main() {
  using std::cout, std::endl, std::cin;

  std::string name;
  std::string student_id;

  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your student ID: ";
  cin >> student_id;

  cout << "Your name is: " << name << endl;
  cout << "Your student ID is: " << student_id << endl;

  return 0;
}
