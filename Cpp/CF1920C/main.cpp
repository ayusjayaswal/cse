#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)

bool iis(vector<int> a, int k) {
  cerr<<"for "<<k<<": ";
  ll sum = 0;
  ll prev = 0;
  fi(j, k){
    prev += a[j];
  }
  for (int i = 0; i < a.size(); i += k) {
    sum = 0;
    for (int j = i; j < i + k; j++) {
      sum += a[j];
      }
    cerr<<prev<<" "<< sum;
    if((sum-prev)%k!=0){
      return false;
    }
    
    sum = prev;
  }
  cerr<<"true\n";
  return true;
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  getvec(a);

  vector<int> fctrs;
  fi(i, n + 1) {
    if ((i > 1) && (n % i == 0)) {
      fctrs.push_back(i);
    }
  }
  ll cnt = 0;

  for (auto i : fctrs) {
    // is(a,i);
    if (iis(a, i)) {
      cnt++;
    }
  }
  cout << cnt << "\n";
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
