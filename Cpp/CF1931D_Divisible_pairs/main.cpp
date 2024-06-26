#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  int ans = 0;
  fi(i,n){
    for(int j = i+1;j<n;j++){
      if(((a[i]+a[j])%x==0) &&((a[i]-a[j])%y==0))ans++;
    }
  }
  cout << ans << "\n";

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
