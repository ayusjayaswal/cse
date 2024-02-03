#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
  ull n;
  cin >> n;
  vector<ull> a(n);
  for (auto &i : a) {
    cin >> i;
  }

  ull ans = 0;
  for (ull i = 1; i < n; ++i) {
    if (a[i] < a[i - 1]) {
      ans += (a[i - 1] - a[i]);
      a[i]=a[i-1];
    }
  }
  cout << ans << "\n";
  return 0;
}
