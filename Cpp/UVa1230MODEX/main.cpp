#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  ll x, y, m;
  cin >> x >> y >> m;
  ll ans = 1;
  while (y > 0) {
    if (y & 1) {
      ans = (ans * x) % m;
    }
    x = (x * x) % m;
    y >>= 1;
  }
  cout << ans % m << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  cin >> t;
  return 0;
}
