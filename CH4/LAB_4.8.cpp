#include <array>
#include <iostream>
#include <string>
#include <vector>

using std::array;
using std::cin, std::cout, std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> yams(3);
  yams.at(0) = 7;
  yams.at(1) = 8;
  yams.at(2) = 6;

  vector<int> yamcosts(3);
  yamcosts.at(0) = 20;
  yamcosts.at(1) = 30;
  yamcosts.at(2) = 50;

  int total = yams.at(0) + yams.at(1) + yams.at(2);

  cout << "Total yams = " << total << endl;
  cout << "The package with " << yams.at(1) << " " << "costs " << yamcosts.at(1)
       << " cents per yam." << endl;

  cout << "The total yam expense is: "
       << (yams.at(0) * yamcosts.at(0) + yams.at(1) * yamcosts.at(1) +
           yams.at(2) * yamcosts.at(2))
       << " cents.\n"
       << endl;

  cout << "Number of elements in yams vector = " << yams.size() << endl;
  cout << "Size of one element = " << sizeof(yams.at(0)) << " bytes" << endl;
  cout << "Approx. bytes uses by elements = "
       << yams.size() * sizeof(yams.at(0)) << " bytes" << endl;

  return 0;
}