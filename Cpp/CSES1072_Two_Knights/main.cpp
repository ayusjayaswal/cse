#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)
void foo(ll n) {
  if (n == 1)
    cout << 0 << "\n";
  if (n == 2)
    cout << 6 << "\n";
  if (n == 3)
    cout << 28 << "\n";
  if (n == 4)
    cout << 96 << "\n";

  if (n > 4) {
    ll net = n * n * (n * n - 1);
    ll out = (((n - 4) * (n - 4) * 8) + ((n - 4) * 4 * 6) + ((n - 4) * 4 * 4) +
               (8 * 3) + (4 * 2) * 3);
    cout << (net - out) / 2 << "\n";
  }
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  fi(i, n) { foo(i + 1); }
}
