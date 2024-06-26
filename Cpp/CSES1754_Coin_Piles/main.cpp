#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  ll x, y;
  cin >> x >> y;
  ll a = max(x, y);
  ll b = min(x, y);
  ll n = a - b;
  a -= 2 * n;
  b -= n;
  bool flag = a >= 0 && b >= 0 && ((a + b) % 3 == 0);
  if (flag)
    cout << "YES"
         << "\n";
  else
    cout << "NO"
         << "\n";
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
