#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)
void foo(deque<ll> a, int m) {
  unsigned ll prod = 1;
  for (auto i : a) {
    prod *= i;
  }
  cout << prod % m << " ";

}
void solve() {
  int n,m;
  cin >> n>>m;
  deque<ll> a(n);
  for(auto &i:a){
    cin >> i;
  }
  vector<char> c(n);
  for(auto &i:c){
    cin >> i;
  }

  foo(a, m);
  fi(i, n-1){
    if(c[i]=='L'){
      a.pop_front();
      foo(a, m);
    }else{
      a.pop_back();
      foo(a, m);
    }
  }
  cout << "\n";

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
