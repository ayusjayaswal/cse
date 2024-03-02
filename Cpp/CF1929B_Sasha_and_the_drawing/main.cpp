#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  ll n, k;
  cin >> n >> k;
  if (k == 4 * n - 2)
    cout << n * 2 << "\n";
  else
    cout << (k + 1) / 2 << "\n";
}
void FOO() {
  int x = 3;
  if (x == 2) {
    cout << "ds"
         << "\n";
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  FOO();
  return 0;
}
