#include <iostream>

int main() { 
  double score[5] = {};
  double total = 0;
  std::cout << "학생 5명의 점수를 입력하세요: ";
  for (int i = 0; i < 5; ++i) {
    std::cin >> score[i];
    total += score[i];
  }
  std::cout << "Student scores : ";
  for (int i = 0; i < 5; ++i) {
    std::cout << score[i] << " ";
  }

  std::cout << "\nTotal score = "
            << score[0] + score[1] + score[2] + score[3] + score[4]
            << std::endl;
  double average = (score[0] + score[1] + score[2] + score[3] + score[4]) / 5;
  std::cout << "Average score = " << average;
 
  return 0;
}