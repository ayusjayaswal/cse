#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 1; i < N; ++i)

void foo(vector<int> &a, int i) {
  a[i] -= a[i - 1] * 2;
  a[i + 1] -= a[i - 1];
  a[i - 1] = 0;
}
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }

  fi(i, n - 1) {
    if (a[i - 1] > 0) {
      foo(a, i);
    }
  }
  for (auto i : a) {
    if (i != 0) {
      cout << "NO"
           << "\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
