#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int y = 0;
  int x = 0;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'B')
      x = i;
  }
  for (int i = s.size(); i >= 0; --i) {
    if (s[i] == 'B')
      y = i;
  }
  cout << x - y + 1 << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
