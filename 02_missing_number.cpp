#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = 0;
  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    a = (a ^ x) ^ (i + 1);
  }
  cout << (a ^ n);
}