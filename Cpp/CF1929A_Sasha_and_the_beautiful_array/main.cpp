#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(auto &i:a){
    cin >> i;
  }
  ll maxi = a[0];
  ll mini = a[0];
  for(auto i:a){
    maxi = max(maxi,i);
    mini = min(mini,i);
  }
  cout << maxi-mini << "\n";
}
int fun(){
  int a= 2;
  if(a>3){ll b = 3;}
  return a;
  ;}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  fun();
  return 0;
}
