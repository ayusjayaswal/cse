#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &i : a){
    cin >> i;
  }

  int q;
  cin >> q;

  vector<int> prefix(n);
  prefix[0] = a[0];
  for(int i = 1; i < n; ++i){
    prefix[i] = prefix[i-1] ^ a[i];
  }

  for(int i = 0; i < q; ++i){
    int x, y;
    cin >> x >> y;

    int xor_val = prefix[y-1] ^ (x > 1 ? prefix[x-2] : 0);

    if(xor_val != 0){
      cout << x << " " << y << "\n";
      return;
    }
  }

  cout << -1 << " " << -1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
