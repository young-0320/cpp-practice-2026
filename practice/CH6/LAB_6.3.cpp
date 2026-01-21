#include <cctype>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
namespace fs = std::filesystem;
using std::cout, std::endl, std::cin;
using std::ofstream;
using std::string;

const int YEARS = 10;
const int CITIES = 3;

int main() {
  cout << "실제 파일 저장 경로: " << fs::current_path() << endl;
  ofstream outfile;
  outfile.open("precipitaion.dat");
  if (!outfile.is_open()) {
    cout << "파일을 열 수 없습니다!" << endl;
    return 1;
  }

  const char* cites[CITIES] = {
      "Seoul",
      "Busan",
      "Daegu",
  };

  int raing[CITIES][YEARS] = {{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                              {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
                              {31, 32, 33, 34, 35, 36, 37, 38, 39, 40}};

  cout << "How many cities do you want to enter? " << CITIES << '\n' << endl;

  for (size_t i = 0; i < CITIES; ++i) {
    cout << "Enter city name: " << cites[i] << endl;
    cout << "Enter " << YEARS << " years of pre data for " << cites[i] << ":"
         << endl;
    for (size_t j = 1; j <= YEARS; ++j) {
      cout << "Year " << j << ": " << raing[i][j - 1] << endl;
    }
    cout << endl;
  }

  // 파일 쓰기
  for (size_t i = 0; i < CITIES; ++i) {
    outfile << cites[i];
    float avr = 0.0f;
    for (size_t j = 1; j <= YEARS; ++j) {
      outfile << ' ' << raing[i][j - 1];
      avr += raing[i][j - 1];
    }
    outfile << ' ' << (avr / YEARS);
    outfile << endl;
  }
  outfile.close();
  return 0;
}