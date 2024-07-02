#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v)                                                              \
  for (auto &i : v) {                                                          \
    cin >> i;                                                                  \
  }
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  string a, b;
  cin >> a;
  cin >> b;

  int na = a.size();
  int nb = b.size();
  int mx = 0;

  fi(from, b.size()){
  int now = from;
  int len = 0;
  fi(i, a.size()){
    if(a[i]==b[now]){
      now++;len++;
    }
  }
  mx = max(mx,len);}

  cerr<<"for: "<<a<<" "<<b<<" : ""max common: "<<mx<<'\n';
  cout << na+nb-mx << "\n";

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
