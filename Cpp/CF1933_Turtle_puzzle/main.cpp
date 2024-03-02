#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for(auto &i : a){
    cin >> i;
  }
  for(auto i : a){
    sum += abs(i);
  }
  cout << sum << "\n";

}

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
