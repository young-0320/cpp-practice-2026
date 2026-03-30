#include <iostream>

using std::cout, std::endl;

const int Cities = 6;
const int Years = 10;
int main() {
  const char* cities[Cities] = {"seoul", "busan",  "incheon", "daejeon",
                                "daegu", "gwangju"

  };
  int rain_data[Cities][Years]{
      // 2016-2025
      {991, 1233, 1284, 891, 1651, 1186, 1775, 1598, 1311, 1582},   // 서울
      {1760, 1014, 1778, 1623, 2281, 1807, 991, 2191, 1945, 1212},  // 부산
      {864, 1028, 1134, 919, 1311, 1071, 1620, 1331, 1060, 1478},   // 인천
      {1228, 1127, 1542, 984, 1614, 1109, 1203, 2042, 1360, 1553},  // 대전
      {1227, 663, 1297, 995, 1244, 910, 581, 1321, 1156, 1029},     // 대구
      {1482, 936, 1427, 1085, 2027, 1303, 769, 2116, 1291, 1974}    // 광주
  };
  cout << "2016 - 2025, 10년간 주요 도시 강수량" << endl;

  for (int i = 0; i < Cities; ++i) {
    cout << cities[i] << ": ";
    for (int j = 0; j < Years; ++j) {
      cout << rain_data[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}