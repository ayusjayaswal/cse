#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll n, t;
  cin >> n >> t;
  vector<ll> s(n, 0);
  fi(i, t) {
    ll x, y;
    set<ll> m;
    cin >> x >> y;
    s[x - 1] += y;
    fi(j, n) { m.insert(s[j]); }
    cout << m.size() << "\n";
  }
}
