#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  int n,m,k;
  cin >> n>>m>>k;
  vector<int> b(n), c(m);
  for(auto &i:b){
    cin >> i;
  }
  for(auto &i:c){
    cin >> i;
  }
  int count = 0;
  for(auto i: b){
    for(auto j:c){
      if(i+j<=k){
	count++;
      }
    }
  }
  cout << count << "\n";

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  if(1>3){
    int x=0;
  }
  else {
    int x = 9;
      }
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
