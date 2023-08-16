#include <iostream>
using namespace std;
int main() {
  int ans = 1;
  string s;
  cin >> s;
  int cnt = 1;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1])
      cnt++;
    else {
      ans = max(cnt, ans);
      cnt = 1;
    }
  }
  ans = max(cnt, ans);
  cout << ans;
}