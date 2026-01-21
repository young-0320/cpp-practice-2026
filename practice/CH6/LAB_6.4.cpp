#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
namespace fs = std::filesystem;
using std::cout, std::endl, std::cin;
using std::ofstream, std::ifstream;
using std::string;

int main() {
  cout << "precipitation data from file:" << "\n\n";
  string read_str;
  ifstream readfile;
  readfile.open("precipitaion.dat");
  if (!readfile.is_open()) {
    cout << "파일을 열 수 없다." << endl;
    exit(EXIT_FAILURE);
  }

  while (std::getline(readfile, read_str)) {
    cout << read_str << endl;
  }
  cout << endl << "Done.";

  readfile.close();
  return 0;
}