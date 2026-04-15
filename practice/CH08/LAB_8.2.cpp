#include <iostream>

using namespace std;
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);
int main() {
  int wallet1 = 300;
  int wallet2 = 350;
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
  cout << "address in main(): wallet1 = " << (&wallet1)
       << ", wallet2 = " << &wallet2 << endl;

  cout << "swapr 함수 호출\n";
  swapr(wallet1, wallet2);
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
  cout << "swapp 함수 호출\n";
  swapp(&wallet1, &wallet2);
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
  cout << "swapv 함수 호출\n";
  swapv(wallet1, wallet2);
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
  return 0;
}
void swapr(int& a, int& b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "address in swapr(): &a = " << &a << ", &b = " << &b << endl;
}

void swapp(int* p, int* q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
  cout << "address in swapp(): p = " << p << ", q = " << q << endl;
}
void swapv(int a, int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "address in swapv(): &a = " << &a << ", &b = " << &b << endl;
}