#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  getvec(a);

  // Use an unordered_map to count frequencies
  map<ll, ll> freq;
  for (const auto &num : a) {
    freq[num]++;
  }

  // Extract unique elements and sort them
  vector<ll> b;
  for (const auto &entry : freq) {
    b.push_back(entry.first);
  }
  // sort(all(b));

  ll prev = b[0] - 1;
  ll ans = 0;
  ll prevcountn = 0;

  for (const auto &i : b) {
    ll countn = freq[i];
    bool gap = ((prev + 1) != i);
    if (countn < prevcountn && !gap) {
      ans += (prevcountn - countn);
    }
    if (gap) {
      ans += prevcountn;
    }
    prevcountn = countn;
    prev = i;
  }
  ans += freq[b.back()];
  cout << ans << "\n";
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
  return 0;
}
