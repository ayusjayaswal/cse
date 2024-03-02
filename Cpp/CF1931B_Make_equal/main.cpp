#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  bool flag =1;
  int n;
  cin >> n;

  vector<ll> a(n);
  ll sum = 0;
  for (auto &i : a) {
    cin >> i;
    sum += i;
  }
  ll avg = sum / n;
  ll excs = 0;
  fi(i, n) {
    if (a[i] - avg > 0) {
      excs += a[i] - avg;
      a[i] = avg;
    }
    if (a[i] - avg < 0) {
      excs -= avg - a[i];
      a[i] = avg;
    }
    if(excs<0)flag=0;

 }
  
  if(flag)cout << "YES" << "\n";
  else cout << "NO" << "\n";


  }

int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
