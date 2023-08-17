#include <iostream>
using namespace std;
#define ll long long

int main() {
  int n;
  cin >> n;
  int arr[n];
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i > 0 && arr[i - 1] - arr[i] > 0) {
      ans += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }
  cout << ans;
}