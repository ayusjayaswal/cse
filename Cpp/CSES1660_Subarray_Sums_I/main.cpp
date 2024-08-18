#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  
  ll cnt = 0;
  ll sum = 0;
  map<ll, ll> sum_map;
  sum_map[0] = 1;  // To account for subarrays starting from index 0

  for (ll r = 0; r < n; ++r) {
    sum += a[r];

    // Check if there's a prefix subarray we can subtract to get sum k
    if (sum_map.find(sum - k) != sum_map.end()) {
      cnt += sum_map[sum - k];
    }

    // Add the current sum to the map
    sum_map[sum]++;
  }

  cout << cnt << "\n";
}
