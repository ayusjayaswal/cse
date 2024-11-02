#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;
#define ll long long int

void solve() {
  ll k;
  cin >> k;
  ll r = LONG_LONG_MAX;
  ll l = 0;

  while (l < r) {
    ll mid = l + (r - l) / 2;
    if (mid - (ll)sqrt(mid) >= k) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }

  cout << l << "\n";
}

int main() {
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
