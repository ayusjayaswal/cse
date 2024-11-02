#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, k;
  cin >> n >> k;
  int count = 0;
  
  while (n > 0) {
    // If n is not divisible by k, count the remainder and reduce n
    if (n % k != 0) {
      count += n % k;
      n -= n % k;
    } else {
      // If n is divisible by k, divide by k and increment count
      n /= k;
      count++;
    }
  }
  
  cout << count << "\n";
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
