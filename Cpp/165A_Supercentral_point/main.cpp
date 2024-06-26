#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int mn, mx;
int a[2001][2001];
void solve() {
  int x, y;
  cin >> x >> y;
  mn = min(mn, min(x + 1001, y + 1001));
  mx = max(mx, max(x + 1001, y + 1001));
  a[x + 1001][y + 1001] = 1;
  for (int i = mn; i <= mx; i++) {
    for (int j = mn; j <= mx; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
    return 0;
  }
}
