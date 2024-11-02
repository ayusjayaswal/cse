#include <bits/stdc++.h>
#include <memory>
#include <vector>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)
ll k;

ll dis(vector<ll> a) {
  ll n = a.size();
  fi(i, n - 1) {
    ll gp = a[i + 1] - a[i];
    if (gp <= k) {
      k -= gp;
    } else {
      return i;
    }
  }
  return -1;
}

void solve() {
  ll n;
  cin >> n >> k;
  vector<ll> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));
  ll fg = dis(a);
  if (fg==-1) {
    cout << 0 << "\n";
    return;
  }
  else{
    ll sum1=0,sum2=0;
    for(int i = fg+1;i<n;i++){
      if(i&1){sum1+=a[i];}
      else{sum2+=a[i];}
    }
    (fg&1)?sum1+=(a[fg]+k):sum2+=(a[fg]+k);
    cout << abs(sum1-sum2) << "\n";
    return;
  }
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
