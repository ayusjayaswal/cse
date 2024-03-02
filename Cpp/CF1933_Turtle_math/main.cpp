#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  for (auto &i : a) {
    cin >> i;
    sum += i;
  }
  if (sum % 3 == 0)
    cout << "0"
         << "\n";
  else if (sum % 3 == 1) {
    for (auto i : a) {
      if ((sum - i) % 3 == 0) {
        cout << "1"
             << "\n";
        return;
      }
    }
    cout << "2" << "\n";

  } else {
    cout << "1"
         << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  if(1>2){
    int x =2;
  }
  else {
    int x =1;
  }
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
