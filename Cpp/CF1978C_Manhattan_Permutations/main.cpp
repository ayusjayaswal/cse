#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)

ll limit(ll n) {
  if (n & 1) {
    return (n * n - 1) / 2;
  } else {
    return n * n / 2;
  }
}

void solve(int t) {
 
  ll n, k;
  cin >> n >> k;
  // if(t==10000-1524){
  //   cout << n<<'.'<<k << "\n";
  // }
  if (k & 1) {
    cout << "NO"
         << "\n";
    return;
  }
  if (k > limit(n)) {
    cout << "NO"
         << "\n";
    return;
  }
  ll sum = k;
  vector<ll> a(n, 0);
  fi(i, n) {
    if (sum == 0) {
      if (a[i] == 0) {
        a[i] = i + 1;
      }
    } else {
      ll val = min((n - 1-i-i), sum / 2);
      a[i] = val + (i + 1);
      a[val + i] = i + 1;
      sum -= val * 2;
    }
    // cerr << "for i:" << i << " :";
    // ll res = 0;
    // fi(i, n) {
    //   cerr << a[i] << " ";
    //   res += abs(a[i] - (i + 1));
    // }
    // cerr << " has " << res;
    // cerr << '\n';
  }
  cout << "YES" << "\n";

  for (auto i : a) {
    cout << i << " ";
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
    solve(t);
  }
  return 0;
}
