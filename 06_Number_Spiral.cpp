#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    int y;
    cin >> x >> y;
    long long ans = 0;
    if (x > y) {
      ans = 1LL * x * x - x * 1LL + 1;
      if (x & 1)
        ans -= (x - y);
      else
        ans += (x - y);
    } else {
      ans = 1LL * y * y - y * 1LL + 1;
      if ((y & 1))
        ans += (y - x);
      else
        ans -= (y - x);
    }
    cout << ans << "\n";
  }
}