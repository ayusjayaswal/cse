#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 1; i <= N; ++i)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> a, b;
  if (n * (n + 1) % 4 != 0) {
    cout << "NO"
         << "\n";
    return 0;
  } else {
    fi(i, n / 2) {
      if (n & 1) {
        if (i & 1) {
          b.push_back(i);
          b.push_back(n - i);
        } else {
          a.push_back(i);
          a.push_back(n - i);
        }
      } else {
        if (i & 1) {
          b.push_back(i);
          b.push_back(n + 1 - i);
        } else {
          a.push_back(i);
          a.push_back(n + 1 - i);
        }
      }
    }
    if (n & 1) {
      a.push_back(n);
    }
    cout << "YES\n" << a.size() << "\n";
    for (auto i : a) {
      cout << i << " ";
    }
    cout << "\n" << b.size() << "\n";
    for (auto i : b) {
      cout << i << " ";
    }
  }
}
