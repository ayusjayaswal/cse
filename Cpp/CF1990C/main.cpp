#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)

std::vector<int> findMADArray(const std::vector<int> &arr) {
  std::unordered_map<int, int> freqMap;
  std::vector<int> madArray(arr.size(), 0);
  int maxDuplicate = 0;

  for (size_t i = 0; i < arr.size(); ++i) {
    freqMap[arr[i]]++;
    if (freqMap[arr[i]] == 2) {
      maxDuplicate = std::max(maxDuplicate, arr[i]);
    }
    madArray[i] = maxDuplicate;
  }

  return madArray;
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  getvec(a);
  vector<int> b;
  b = findMADArray(a);
  for (auto i : b) {
    cerr << i << " ";
  }
  ll sum = accumulate(all(a), 0);
  ll cnt = 1;
  for (int i = 1; i < b.size(); ++i) {
    if (b[i] == b[i - 1]) {
      cnt++;
    } else {
      cerr << '/' << cnt<< '/';
      sum += b[i - 1] * (cnt * (cnt + 1) / 2);
      cnt = 1;
    }
  }
  // Handle the last segment explicitly
      cerr << '/' << cnt<< '/';
  sum += b[b.size()-1] * (cnt * (cnt + 1) / 2);

  fi(i, n){
    sum+= (n-i+1)*b[i];
  }
  cout << sum << "\n";
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
