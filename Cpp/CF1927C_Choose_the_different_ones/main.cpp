#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vector<int> b(m);
  for (auto &i : b) {
    cin >> i;
  }

  // Now...
  vector<int> xa, xb, xc;
  for (int i = 1; i <= k; ++i) {
    int na = count(a.begin(), a.end(), i);
    int nb = count(b.begin(), b.end(), i);
    // cout << "for "<< i<<" a:"<<na<<" b:"<<nb << "\n";
    if (na > 0 && nb > 0)
      xc.push_back(i);
    else if (na > 0)
      xa.push_back(i);
    else if (nb > 0)
      xb.push_back(i);
  }
  for (auto i : xc) {
    if (xa.size() <= xb.size())
      xa.push_back(i);
    else
      xb.push_back(i);
  }
  // cout << "xa: ";
  // for(auto i : xa){ cout << i << " ";}
  // cout << "\nxb: ";
  // for(auto i : xb){
  //   cout << i << " ";
  // }
  if (xa.size() == k / 2 && xb.size() == k / 2)
    cout << "YES"
         << "\n";
  else
    cout << "NO"
         << "\n";
}

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
