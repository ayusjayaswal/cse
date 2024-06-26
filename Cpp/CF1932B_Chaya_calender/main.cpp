#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

int nmulti(int ans, int i) { return ans += ans % i; }

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  int ans = a[0];
  for (int i = 1; i < n; i++) {
    if (ans % a[i] == 0) {
      ans += a[i];
    } else {
      ans += a[i]-(ans % a[i]);
    }
  }
  cout << ans << "\n";
}

int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
