#include <iostream>
#include <vector>
using std::cout, std::endl, std::cin;
using std::vector;
int arr_max(int arr[], int size);
int arr_min(int arr[], int size);
double arr_average(int arr[], int size);

int main() {
  vector<int> v;
  int temp = 0;
  cout << "Array elements: ";

  while (cin >> temp) {
    v.push_back(temp);
    if (cin.peek() == '\n') {
      break;
    }
  }

  cout << endl << endl;
  cout << "Maximun value: " << arr_max(v.data(), v.size()) << endl
       << "Minimun value: " << arr_min(v.data(), v.size()) << endl
       << "Average value: " << arr_average(v.data(), v.size());
  return 0;
}
int arr_max(int arr[], int size) {
  int max = arr[0];
  for (int i = 0; i < size; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
int arr_min(int arr[], int size) {
  int min = arr[0];
  for (int i = 0; i < size; ++i) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}
double arr_average(int arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += arr[i];
  }
  return sum / (double)size;
}