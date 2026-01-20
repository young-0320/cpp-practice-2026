#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
  int num = 13;
  int in_num = 0;
  int count = 0;
  cout << "Guess a number between 1 and 20!" << endl
       << "Enter your guess (1-20): ";
  while (cin >> in_num) {
    ++count;
    if (in_num > num) {
      cout << "Output: high!" << endl << "Enter your guess (1-20): ";

    } else if (in_num < num) {
      cout << "Output: low!" << endl << "Enter your guess (1-20): ";
    } else {
      cout << "Output: Correct!" << endl
           << "Congratulations! You guessed it in " << count << " tries!";
      break;
    }
  }

  return 0;
}