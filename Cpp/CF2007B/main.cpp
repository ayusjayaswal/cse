#include <algorithm>
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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  auto maxm = max_element(all(a));
  ll t = *maxm;
  cerr << *maxm <<" : ";
  fi(i, m) {
    char o;
    int x, y;
    cin >> o >> x >> y;
    if (o == '+' && ( t <= y) && (t >= x)) {
      t++;
    } else if (o == '-' && (t <= y) && (t >= x)) {
      t--;
    }
    cout << t << " ";
  }
  cout << "\n";
}

int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
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
