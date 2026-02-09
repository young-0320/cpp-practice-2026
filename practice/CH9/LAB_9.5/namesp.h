#pragma once
#include <string>
namespace pers {
struct Person {
  std::string fname;
  std::string lname;
};
void getPerson(Person&);
void showPerson(const Person&);
}  // namespace pers

namespace debts {
using namespace pers;
struct Debt {
  Person name;
  double amount;
};
void getDebt(Debt&);
void showDebt(const Debt&);
double sumDebts(const Debt ar[], int n);
}  // namespace debts

// 이름 공간을 활용하여 개인의 이름과 해당 부채 내역을 기록, 출력, 합산하는 부채
// 관리 프로그램이다.